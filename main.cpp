#include <iostream>


int lol()
{
	asm( "movl $1337, %eax" );
}


int main()
{
	std::cout << "Assembly is " << lol() << std::endl;

	return 0;
}
