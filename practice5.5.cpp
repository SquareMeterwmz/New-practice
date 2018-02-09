#include <iostream>

int main()
{
	using std::cout;
	using std::cin;

	char * pmonth[12]{ "January","February","March","April","May","June","July","August","September","October","November","December" };
	int sale[12];
	int sales=0;
		
	cout << "Please enter the sales volume in every month: \n";
	for (int i = 0; i < 12; i++)
	{
		cout << pmonth[i] << " : ";
		cin >> sale[i];
	}
	for (int i = 0; i < 12; i++)
	{
		sales += sale[i];
	}
	cout << "The sale volume this year is " << sales;
	cin.get();
	cin.get();
	return 0;
}