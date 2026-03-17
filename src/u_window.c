#include "u_window.h"

GLFWwindow* u_window;

int u_createWindow(){
    glfwInit();
    
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    u_window = glfwCreateWindow(500,500,"NULL",NULL,NULL);

    return U_SUCCESS;
}

int u_destroyWindow(){
    glfwDestroyWindow(u_window);
    glfwTerminate();

    return U_SUCCESS;
}