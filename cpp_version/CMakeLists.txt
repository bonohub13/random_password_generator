cmake_minimum_required(VERSION 3.1)
project(random_password_generator)

add_executable(randomPasswordGenerator src/main.cpp)
add_subdirectory(include)
link_libraries(passwd_generator)
target_link_libraries(randomPasswordGenerator passwd_generator)

# ----- only use this when add_library is used -----
function(link_lib executable_name library_name)
	add_library(${library_name} STATIC include/${library_name}.cpp)
	target_link_libraries(${executable_name} ${library_name})
	target_include_directories(${executable_name} PRIVATE include)
endfunction()
