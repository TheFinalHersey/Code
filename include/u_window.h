#pragma once

#include "u_std.h"

#define GLFW_INCLUDE_VULKAN
#include "GLFW/glfw3.h"

extern GLFWwindow* u_window;

int u_createWindow(); 
int u_destroyWindow();
