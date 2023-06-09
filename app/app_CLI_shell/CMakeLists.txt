
set(HEADER_LIST
)
	
set(SOURCE_LIST
	src/main.cpp
)

add_executable(Example-CLI_shell)
target_sources(Example-CLI_shell PRIVATE ${SOURCE_LIST} ${HEADER_LIST})
set_target_properties(Example-CLI_shell PROPERTIES FOLDER Applications)
target_compile_features(Example-CLI_shell PRIVATE cxx_std_17)
target_link_libraries(Example-CLI_shell PRIVATE Example-static)
