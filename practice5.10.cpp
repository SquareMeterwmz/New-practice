#include <iostream>

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	int lines;

	cout << "Enter number of rows: ";
	cin >> lines;
	for (int i = 1; i <= lines; i++)
	{
		for (int j = lines; j> i; j--)
		{
			cout << ".";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cin.get();
	cin.get();
	return 0;
}