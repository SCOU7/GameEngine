#pragma once 

#ifndef RB_PLATFORM_WINDOWS

#include "Application.h"

extern Rambert::Application* Rambert::CreateApplication();

int main(int argc, char** argv)
{
    Rambert::Log::Init();
    RB_CORE_WARN("Initialized Log!");
    int a = 5;
    RB_INFO("Hello! Var={0}", a);

    auto app = Rambert::CreateApplication();
    app->Run();
    delete app;
}

#endif  