#ifndef S_OS_C
#define S_OS_C

#if SU_TARGET_PLATFORM == SU_PLATFORM_GENERIC_LINUX
#include "linux/os.c"
#elif SU_TARGET_PLATFORM == SU_PLATFORM_WINDOWS
#include "windows/os.c"
#endif

#endif

