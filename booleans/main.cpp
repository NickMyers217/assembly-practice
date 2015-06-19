#include <iostream>
#include <bitset>


extern "C" int asmOr(int a, int b);
extern "C" int asmXor(int a, int b);
extern "C" int notPlus1(int a);


void printBits(int n)
{
	std::bitset<32> bits(n);
	std::cout << bits << std::endl;
}


int main()
{
	int c1 = asmOr(2783, 1552);
	int c2 = asmXor(2783, 1552);
	int c3 = asmXor(c2, 1552);
	int c4 = notPlus1(129);

	std::cout << "Question 1: " << std::endl;
	printBits(2783);
	printBits(1552);
	printBits(c1);
	
	std::cout << "\nQuestion 2: " << std::endl;
	printBits(2783);
	printBits(1552);
	printBits(c2);

	std::cout << "\nQuestion 3: " << std::endl;
	printBits(c2);
	printBits(1552);
	printBits(c3);

	std::cout << "\nQuestion 4: " << std::endl;
	printBits(129);
	printBits(c4);

	return 0;
}
