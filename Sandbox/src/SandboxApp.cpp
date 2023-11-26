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
	return new Sandbox();
}

