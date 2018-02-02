#include <iostream>
double change(double);

int main()
{
	double length;
	std::cout << "Enter the number of light years: ";
	std::cin >> length;
	std::cout << length << " light years = " << change(length) << " astrnomical units.";
	std::cin.get();
	std::cin.get();
	return 0;
}

double change(double new_length)
{
	return 63240*new_length;
}