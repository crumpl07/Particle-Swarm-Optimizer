#include <iostream>

void PrintMessage(const char* message)
{
	std::cout << message << std::endl;
	printf("Hello Aira");

}

int Multiply(int a, int b)
{
	PrintMessage("Multiply");
	return a * b;
}