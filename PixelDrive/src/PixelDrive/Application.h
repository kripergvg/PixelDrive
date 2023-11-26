#pragma once
#include "Core.h"


namespace PixelDrive
{
	class PIXEL_DRIVE_API Application
	{
	public: 
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}