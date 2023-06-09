
set(INCLUDE_LIST
	${PROJECT_SOURCE_DIR}/include/example/example.hpp
	${PROJECT_SOURCE_DIR}/include/example/functions.hpp
)

set(HEADER_LIST
)
	
set(SOURCE_LIST
	functions.cpp
)

source_group(TREE ${PROJECT_SOURCE_DIR}/include PREFIX "Include" FILES ${INCLUDE_LIST})
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} PREFIX "Header Files" FILES ${HEADER_LIST})
source_group(TREE ${PROJECT_SOURCE_DIR}/src PREFIX "Source Files" FILES ${SOURCE_LIST})

add_library(Example-static STATIC ${INCLUDE_LIST} ${SOURCE_LIST} ${HEADER_LIST})
target_include_directories(Example-static PUBLIC ${PROJECT_SOURCE_DIR}/include)
set_target_properties(Example-static PROPERTIES FOLDER Libraries)
target_compile_features(Example-static PUBLIC cxx_std_20)
#target_link_libraries(Example-static PRIVATE 3rdparty)

add_library(Example-shared SHARED ${SOURCE_LIST} ${HEADER_LIST})
target_include_directories(Example-shared PUBLIC ${PROJECT_SOURCE_DIR}/include)
set_target_properties(Example-shared PROPERTIES FOLDER Libraries)
target_compile_features(Example-shared PUBLIC cxx_std_20)
#target_link_libraries(Example-shared PRIVATE 3rdparty)
