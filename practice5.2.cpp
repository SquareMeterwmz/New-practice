#include <iostream>
#include <array>
const int A =101;

int main()
{
	using std::cin;
	using std::cout;
	using std::array;
	array<long double, A>factorials;
	
	factorials[0] = 1;
	cout << "0 != 1\n";
	for (int i = 1; i <A; i++)
	{
		factorials[i] = factorials[i - 1] * i;
		cout << i << "! = " << factorials[i]<<"\n";
	}
	cin.get();
	return 0;
}