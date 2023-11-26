#pragma once


#ifdef PD_PLATFORM_WINDOWS
	#ifdef PD_BUILD_DLL
		#define PIXEL_DRIVE_API __declspec(dllexport)
	#else 
		#define PIXEL_DRIVE_API __declspec(dllimport)
	#endif	
#else
	#error Only windows is supported
#endif