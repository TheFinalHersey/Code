#include "u_initialiseVk.h"

VkInstance u_vkInstance;

int u_createInstanceVk(){
    VkApplicationInfo appInfo = {0};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.apiVersion = U_VK_VERSION;
    appInfo.applicationVersion = U_APP_VERSION;
    appInfo.pApplicationName = "NULL";
    appInfo.pEngineName = "NULL";
    appInfo.pNext = NULL;
    appInfo.engineVersion = U_APP_VERSION;


    VkInstanceCreateInfo createInfo = {0};
    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    createInfo.pApplicationInfo = &appInfo;
    createInfo.pNext = NULL;

    createInfo.enabledExtensionCount = 0;
    createInfo.ppEnabledExtensionNames = NULL;

    createInfo.enabledLayerCount = 0;
    createInfo.ppEnabledLayerNames = NULL;
    
    VkResult result = vkCreateInstance(&createInfo,NULL,&u_vkInstance);
    return U_SUCCESS;
}

int u_destroyInstanceVk(){
    vkDestroyInstance(u_vkInstance,NULL);
    return U_SUCCESS;
}