#include <iostream>


int main()
{
	using std::cin;
	using std::cout;
	int a, b,c=0;

	cin >> a >> b;
	for (int i = a; i < b ; i++)
	{
		c = c + i;
		cout<< i << "+";
	}
	c = c + b;
	cout << b << "=" << c;
	cin.get();
	cin.get();
	return 0;
}