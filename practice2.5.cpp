#include <iostream>
double change(double);

int main()
{
	double temp;
	std::cout << "Plaease enter a Celesius value:";
	std::cin >> temp;
    std::cout << temp << " degrees Celesius is " << change(temp) << " degrees Fahrenheit.";
	std::cin.get();
	std::cin.get();
	return 0;
}

double change(double new_temp)
{
	return 1.8*new_temp + 32.0;
}