#include <iostream>

int main()
{
	using std::cin;
	using std::cout;
	int income{};
	cout << "Please enter your income(stop when you did`t enter a positive number): ";
	while (cin>>income||income <0)
	{
		switch ((income-1)/5000)
		{
		case 0:income = 0; break;
		case 1:
		case 2:income = (income - 50000)*0.10; break;
		case 3:
		case 4:
		case 5:
		case 6:income = (income - 15000)*0.15 + 10000 * 0.10; break;
		default:income = (income - 35000)*0.20 + 20000 * 0.15 + 10000 * 0.10; break;
		}
		cout << "Your income tax is " << income<<" tvarps.";
		cout << "\nPlease enter your income(stop when you did`t enter a positive number): ";
	}
	cin.get();
	cin.get();
	return 0;
}