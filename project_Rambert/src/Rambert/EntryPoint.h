#pragma once 

#ifndef RB_PLATFORM_WINDOWS

#include "Application.h"

extern Rambert::Application* Rambert::CreateApplication();

int main(int argc, char** argv)
{
    printf("Rambert Engine\n");
    auto app = Rambert::CreateApplication();
    app->Run();
    delete app;
}

#endif 