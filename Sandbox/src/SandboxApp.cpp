#include <PixelDrive.h>

class Sandbox : public PixelDrive::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

PixelDrive::Application* PixelDrive::CreateApplication()
{
	APP_ERROR("TEST");
	return new Sandbox();
}

