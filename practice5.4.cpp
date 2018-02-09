#include <iostream>

int main()
{
	using std::cout;
	using std::cin;
	double daphne = 100, cleo = 100;
	int year;
	for (year = 0;cleo<=daphne; year ++)
	{
		cleo = cleo + cleo*0.05;
		daphne = daphne + 0.10 * 100;
	}
	cout << year << " years.\nCleo: " << cleo << "\nDaphen: " << daphne;
	cin.get();
	return 0;
}