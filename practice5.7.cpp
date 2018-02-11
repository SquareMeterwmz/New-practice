#include <iostream>
#include <string>
using std::string;
struct car
{
	string make;
	int year;
};

int main()
{
	using std::cout;
	using std::cin;
	using std::getline;
	int numbers;
	cout << "How many cars do you wish to catalog? ";
	cin >> numbers;
	cin.get();
	car *cars = new car[numbers];
	for (int i = 0; i < numbers; i++)
	{
		cout << "Car #" << i + 1 << ":\nPlease enter the make: ";
		getline(cin, (cars[i]).make);
		cout << "Please enter the year made: ";
		cin>>cars[i].year;
		cin.get();
	}
	cout << "Here is your collections:\n";
	for (int i = 0; i < numbers; i++)
	{
		cout << (cars[i]).year << " " << (cars[i]).make<<"\n";
	}
	cin.get();
	delete[] cars;
	return 0;
}