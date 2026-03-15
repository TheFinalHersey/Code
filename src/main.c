#define GLFW_INCLUD_VULKAN

#include <stdio.h>
#include <stdlib.h>
#include "GLFW/glfw3.h"
#include "vulkan\vulkan.h"

int main(){
    printf("I run after four hours! sleepless\n");

    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    GLFWwindow* window = glfwCreateWindow(500,500,"NULL",NULL,NULL);

    while(!glfwWindowShouldClose(window)){
        glfwPollEvents();
    }

    glfwTerminate();
    printf("the end");

    return EXIT_SUCCESS;
}