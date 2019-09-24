#include <iostream>

int main()
{
	try
	{
		
	}
	catch (std::exception &exception)
	{
		std::cerr << "Uncaught exception in main: " << exception.what() << std::endl;
	}
}
