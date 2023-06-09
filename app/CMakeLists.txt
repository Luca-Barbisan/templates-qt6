set(APP_CLI_cmd ON CACHE BOOL "enable CLI cmd app")
set(APP_CLI_shell ON CACHE BOOL "enable CLI shell app")
set(APP_GUI_qt6 ON CACHE BOOL "enable GUI qt6 app")

if(APP_CLI_cmd)
	add_subdirectory(app_CLI_cmd)
endif()

if(APP_CLI_shell)
	add_subdirectory(app_CLI_shell)
endif()

if(APP_GUI_qt6)
	add_subdirectory(app_GUI_qt6)
endif()