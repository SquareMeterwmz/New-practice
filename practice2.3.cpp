#include <iostream>
void sentence1(void);
void sentence2(void);

int main()
{
	sentence1();
	sentence1();
	sentence2();
	sentence2();
	std::cin.get();
	return 0;
}

void sentence1()
{
	std::cout << "Three blind mice\n";
}

void sentence2()
{
	std::cout << "See how they run\n";
}