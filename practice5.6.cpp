#include <iostream>

int main()
{
	using std::cout;
	using std::cin;

	char * pmonth[12]{ "January","February","March","April","May","June","July","August","September","October","November","December" };
	int sale[3][12]{};
	int sales[4]{};
	int saless{};

	for (int j = 0; j < 3; j++)
	{
		cout << "Please enter the sales volume in every month in the year " << j+1<<"\n";
		for (int i = 0; i < 12; i++)
		{
			cout << pmonth[i] << " : ";
			cin >> sale[j][i];
		}
		for (int i = 0; i < 12; i++)
		{
			sales[j] += sale[j][i];
		}
		saless += sales[j];
	}
	for (int j = 0; j <3; j++)
	{
		cout << "The sale volume in the year "<<j<<" is " << sales[j]<<"\n";
	}
	cout << "The sale volume in the 3 years is " << saless;
	cin.get();
	cin.get();
	return 0;
}