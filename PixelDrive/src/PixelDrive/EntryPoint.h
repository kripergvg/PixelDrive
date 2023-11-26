#pragma once

#include "Application.h"
#include "Log.h"

extern PixelDrive::Application* PixelDrive::CreateApplication();

int main(int argc, char** argv)
{
	PixelDrive::Log::Init();

	PixelDrive::Application* app = PixelDrive::CreateApplication();
	app->Run();
	delete app;
}
