/*
THIS APPLICATIONS STANDARD LIBRARY 
*/

#include <stdlib.h>

#define MAKE_VERSION(major, minor, patch) \
    ( ((uint32_t)(major) << 29U) | \
      ((uint32_t)(minor) << 22U) | \
      ((uint32_t)(patch) << 12U) )

#define U_APP_VERSION MAKE_VERSION(0,0,0)
#define U_VK_VERSION MAKE_VERSION(1,4,0)
#define U_SUCCESS EXIT_SUCCESS
#define U_FAILURE EXIT_FAILURE
