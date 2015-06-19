#include <iostream>


extern "C" int getValueFromASM();


int main()
{
	std::cout << "ASM said " << getValueFromASM() << std::endl;

	return 0;
}
