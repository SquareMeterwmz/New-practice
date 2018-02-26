#include <fstream>
#include <iostream>

int main()
{
	std::ifstream read;
	read.open("temp-practice.txt");
	char ch;
	int number=0;
	read >> ch;
	while(read.good())
	{
		number++;
		read >> ch;
	} 
	std::cout << number;
	std::cin.get();
	read.close();
	return 0;
}