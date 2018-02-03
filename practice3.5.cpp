#include <iostream>

int main()
{
	using namespace std;
	long long world, us;

	cout << "Enter the world's population: ";
	cin >> world;
	cout << "Enter the population of the US: ";
	cin >> us;
	cout << "The population of the US is " << double(us) / double(world)*100 << "% of the world population.";
	cin.get();
	cin.get();
	return 0;
}