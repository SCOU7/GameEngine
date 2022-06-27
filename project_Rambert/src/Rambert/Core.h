#pragma once

#ifdef RB_PLATFORM_WINDOWS
    #ifdef RB_BUILD_DLL
        #define RAMBERT_API __declspec(dllexport)
    #else 
        #define RAMBERT_API __declspec(dllimport)
    #endif
#else
    // #error RAMBERT only supports Windows!
#endif