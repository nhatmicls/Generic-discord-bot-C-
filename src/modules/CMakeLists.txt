add_subdirectory(member_manager)
add_subdirectory(command)

add_library(slash_command STATIC ./slash_command.cpp)
target_compile_definitions(slash_command PUBLIC slash_command)