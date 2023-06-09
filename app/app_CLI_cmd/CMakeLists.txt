
set(HEADER_LIST
)
	
set(SOURCE_LIST
	src/main.cpp
)

add_executable(Example-CLI_cmd)
target_sources(Example-CLI_cmd PRIVATE ${SOURCE_LIST} ${HEADER_LIST})
set_target_properties(Example-CLI_cmd PROPERTIES FOLDER Applications)
target_compile_features(Example-CLI_cmd PRIVATE cxx_std_17)
target_link_libraries(Example-CLI_cmd PRIVATE Example-static)
