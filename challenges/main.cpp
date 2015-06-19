#include <iostream>

extern "C" int addInts(int a, int b, int c, int d);
extern "C" int mulBy17(int a);
extern "C" int subBy5x(int a, int by);

int main()
{
	int a = 3, b = 4, c = 2, d = 1;

	std::cout << addInts(a, b, c, d) << '\n';
	std::cout << mulBy17(a) << '\n';
	std::cout << subBy5x(a, b) << '\n';

	return 0;
}
