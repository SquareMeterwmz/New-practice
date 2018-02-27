#include <iostream>
#include <string>
#include <fstream>
struct foundation
{
	std::string name;
	double money;
};

int main()
{
	std::ifstream read;
	read.open("temp-practice.txt");
	using std::cout;
	int sum{}, patron{};

	//cout << bool(read.is_open());
	read >> sum;
	read.get();
	//cout << sum << "\n";
	foundation *precord = new foundation[sum];
	for (int i = 0; i < sum; i++)
	{
		std::getline(read,(precord[i]).name);
		read >> (precord[i]).money;
		read.get();
		//cout << (precord[i]).name << "\n" << (precord[i]).money << "\n";
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
		if ((precord[i]).money <= 10000)
		{
			cout << "\t" << (precord[i]).name << "\t" << (precord[i]).money << "\n";
			patron++;
		}
	}
	if (0 == patron)cout << "\tNone\n";
	std::cin.get();
	read.close();
	return 0;
}