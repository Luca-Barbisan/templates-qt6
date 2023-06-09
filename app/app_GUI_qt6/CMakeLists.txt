
set(CMAKE_PREFIX_PATH "" CACHE PATH "Qt6 installation path")

find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

set(HEADER_LIST
	src/MainWindow/MainWindow.h
	src/CustomWidget/widget.h
)
	
set(SOURCE_LIST
	src/main.cpp
	src/MainWindow/MainWindow.cpp
	src/CustomWidget/widget.cpp
)

set(UI_LIST
	src/MainWindow/MainWindow.ui
	src/CustomWidget/widget.ui
)

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} PREFIX "Header Files" FILES ${HEADER_LIST})
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR}/src PREFIX "Source Files" FILES ${SOURCE_LIST})
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR}/src PREFIX "UI Files" FILES ${UI_LIST})

add_executable(Example-GUI_Qt6)
target_sources(Example-GUI_Qt6 PRIVATE ${SOURCE_LIST} ${HEADER_LIST} ${UI_LIST})
set_target_properties(Example-GUI_Qt6 PROPERTIES FOLDER Applications)
target_compile_features(Example-GUI_Qt6 PRIVATE cxx_std_17)
target_link_libraries(Example-GUI_Qt6 PRIVATE Qt6::Widgets Example-static)

set_target_properties(Example-GUI_Qt6 PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)

add_custom_command(TARGET Example-GUI_Qt6 POST_BUILD
	COMMAND "${CMAKE_COMMAND}" -E
		env PATH="${_qt_bin_dir}" "${WINDEPLOYQT_EXECUTABLE}"
			#--verbose 0
			#--no-compiler-runtime
			#--no-angle
			#--no-opengl-sw
			#\"$<TARGET_FILE:Example-GUI_Qt6>\"
			"$<TARGET_FILE:Example-GUI_Qt6>"
	COMMENT "Running windeployqt..."
)