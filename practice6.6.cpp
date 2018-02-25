#include <iostream>
#include <string>
struct foundation
{
	std::string name;
	double money;
};

int main()
{
	using std::cout;
	using std::cin;
	int sum{}, patron{};

	cout << "Please enter the number of contributors: ";
	cin >> sum;
	foundation *precord = new foundation[sum];
	cout << "Pleasee enter the name and money of every contributors.\n";
	for (int i = 0; i < sum; i++)
	{
		cout << "Contributor " << i+1;
		cout << "\n\tName: ";
		cin >> (precord[i]).name;
		cout << "\tMoney: ";
		cin>>(precord[i]).money;
	}
	cout << "Grand Patrons:\n";
	cout << "\tName\tMoney\n";
	for (int i = 0; i < sum; i++)
	{
		if ((precord[i]).money>10000)
		{
			cout << "\t" << (precord[i]).name << "\t" << (precord[i]).money << "\n";
			patron++;
		}
	}
	if (0 == patron)cout << "\tNone\n";
	cout << "Patrons:\n";
	cout << "\tName\tMoney\n";
	patron = 0;
	for (int i = 0; i < sum; i++)
	{
		if ((precord[i]).money<=10000)
		{
			cout << "\t" << (precord[i]).name << "\t" << (precord[i]).money << "\n";
			patron++;
		}
	}
	if (0 == patron)cout << "\tNone\n";
	cin.get();
	cin.get();
	return 0;
}