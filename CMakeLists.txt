cmake_minimum_required(VERSION 3.16...3.22)

project(BitEditor
	VERSION 1.0.0
	LANGUAGES CXX
)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_subdirectory(3rdparty)
add_subdirectory(src)
add_subdirectory(app)

#add_subdirectory(test)