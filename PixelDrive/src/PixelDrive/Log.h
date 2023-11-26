#pragma once

#include <memory>

#include <spdlog/spdlog.h>
#include "Core.h"

namespace PixelDrive
{
	class PIXEL_DRIVE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger()
		{
			return s_CoreLogger;
		}

		inline static std::shared_ptr<spdlog::logger>& GetClientLogger()
		{
			return s_ClientLogger;
		}

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

#define CORE_ERROR(...) ::PixelDrive::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CORE_WARN(...) ::PixelDrive::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CORE_TRACE(...) ::PixelDrive::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CORE_FATAL(...) ::PixelDrive::Log::GetCoreLogger()->fatal(__VA_ARGS__)
#define CORE_INFO(...) ::PixelDrive::Log::GetCoreLogger()->info(__VA_ARGS__)

#define APP_ERROR(...) ::PixelDrive::Log::GetClientLogger()->error(__VA_ARGS__)
#define APP_WARN(...) ::PixelDrive::Log::GetClientLogger()->warn(__VA_ARGS__)
#define APP_TRACE(...) ::PixelDrive::Log::GetClientLogger()->trace(__VA_ARGS__)
#define APP_FATAL(...) ::PixelDrive::Log::GetClientLogger()->fatal(__VA_ARGS__)
#define APP_INFO(...) ::PixelDrive::Log::GetClientLogger()->info(__VA_ARGS__)