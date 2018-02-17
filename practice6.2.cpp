#include <iostream>
const int Size=10;

int main()
{
	using std::cout;
	using std::cin;
	double donations[Size]{};
	double average{};
	int i = 0, number = 0;;

	cout << "Please enter 10 donation numbers.Stop when you didn`t enter a number.\n";
	cout << "Please enter the number " << i+1<<": ";
	while(i<Size&&cin >> donations[i])
	{
		average += donations[i];
		i++;
		cout << "Please enter the number " << i+1<<": ";
	}
	average /= i;
	for (int j = 0; j < i; j++)
	{
		if (donations[j] > average)number++;
	}
	cout << "Average: " << average << "\nThere are " << number << " numbers lager than the average.";
	cin.clear();
	cin.get();
	cin.get();
	cin.get();
}