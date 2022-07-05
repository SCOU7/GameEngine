#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include <memory>

namespace Rambert {

class Log 
{
public:
    static void Init();

    inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() {return s_CoreLogger;}
    inline static std::shared_ptr<spdlog::logger>& GetClientLogger() {return s_ClientLogger;}

private:
    static std::shared_ptr<spdlog::logger> s_CoreLogger;
    static std::shared_ptr<spdlog::logger> s_ClientLogger;
};
};

// Core log macros
#define RB_CORE_TRACE(...)  ::Rambert::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define RB_CORE_INFO(...)   ::Rambert::Log::GetCoreLogger()->info(__VA_ARGS__)
#define RB_CORE_WARN(...)   ::Rambert::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define RB_CORE_ERROR(...)  ::Rambert::Log::GetCoreLogger()->error(__VA_ARGS__)
#define RB_CORE_FATAL(...)  ::Rambert::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define RB_TRACE(...)  ::Rambert::Log::GetClientLogger()->trace(__VA_ARGS__)
#define RB_INFO(...)   ::Rambert::Log::GetClientLogger()->info(__VA_ARGS__)
#define RB_WARN(...)   ::Rambert::Log::GetClientLogger()->warn(__VA_ARGS__)
#define RB_ERROR(...)  ::Rambert::Log::GetClientLogger()->error(__VA_ARGS__)
#define RB_FATAL(...)  ::Rambert::Log::GetClientLogger()->fatal(__VA_ARGS__)
