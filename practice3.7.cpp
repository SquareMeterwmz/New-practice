#include <iostream>

int main()
{
	using namespace std;
	double a;

	cout << "ŷ�޷������������Ϊ______L/100km\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cin >> a;
	cout << "�����������������Ϊ " << 1 / (a /62.14 /3.875) << " mpg";
	cin.get();
	cin.get();
	return 0;
}