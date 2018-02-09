#include <iostream>

int main()
{
	using std::cin;
	using std::cout;
	int sum;
	int i;
	cin>>i;
	sum =i;
	for (; i; sum += i)
	{
		cout << "SUM=" << sum << "\n";
		cin >> i;
	}
	cin.get();
	cin.get();
	return 0;
}