#include <iostream>
void clock(int, int);

int main()
{
	int hours;
	int minutes;
	std::cout << "Enter the number of hours: ";
	std::cin >> hours;
	std::cout << "Enter the number of minutes: ";
	std::cin >> minutes;
	clock(hours, minutes);
	std::cin.get();
	std::cin.get();
	return 0;
}

void clock(int hours, int minutes)
{
	std::cout << "Time: " << hours << ":" << minutes;
}