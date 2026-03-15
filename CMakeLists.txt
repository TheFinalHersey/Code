cmake_minimum_required(VERSION 3.25)

# set vcpkg toolchain
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
)

# link libraries
target_link_libraries(Sim PRIVATE glfw Vulkan::Vulkan)