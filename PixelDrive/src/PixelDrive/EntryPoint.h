#pragma once

#include "Application.h"

extern PixelDrive::Application* PixelDrive::CreateApplication();

int main(int argc, char** argv)
{
	PixelDrive::Application* app = PixelDrive::CreateApplication();
	app->Run();
	delete app;
}
