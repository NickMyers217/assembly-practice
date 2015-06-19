#include <iostream>

extern "C" int getValueFromGAS();

int main()
{
	std::cout << "GAS said " << getValueFromGAS() << std::endl;

	return 0;
}
