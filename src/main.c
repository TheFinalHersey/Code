#define GLFW_INCLUD_VULKAN

#include "u_std.h"
#include "u_window.h"
#include "u_initialiseVk.h"

#include <stdio.h>

int main(){
    printf("I run after four hours! sleepless\n");

    u_createWindow();
    u_createInstanceVk();

    while(!glfwWindowShouldClose(u_window)){
        glfwPollEvents();
    }

    u_destroyWindow();
    u_destroyInstanceVk();
    printf("the end");

    return U_SUCCESS;
}