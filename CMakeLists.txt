cmake_minimum_required(VERSION 3.25)

# set vcpkg location here 
# Note vcpkg is configured in manifest mode go to /vcpkg.json
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_SOURCE_DIR}/dev/vcpkg/scripts/buildsystems/vcpkg.cmake")

project(Sim)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED True)

# find libraries
find_package(glfw3 CONFIG REQUIRED)
find_package(Vulkan REQUIRED)

# create executable
add_executable(Sim 
    src/main.c
    src/u_window.c
    src/u_initialiseVk.c
    include/u_initialiseVk.h
    include/u_window.h
)

target_include_directories(Sim PRIVATE include)

# link libraries
target_link_libraries(Sim PRIVATE glfw Vulkan::Vulkan)