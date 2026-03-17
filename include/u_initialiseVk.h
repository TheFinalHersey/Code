#pragma once

#include "u_std.h"
#include "vulkan\vulkan.h"

extern VkInstance u_vkInstance;

int u_createInstanceVk();

int u_destroyInstanceVk();