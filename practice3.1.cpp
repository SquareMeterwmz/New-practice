#include <iostream>

int main()
{
	using namespace std;
	int height;
	const double A=12;

	cout << "你的身高是:__\b\b";
	cin >> height;
	cout << "你的身高是" << (double)height / A << "英尺，" << height << "英寸。";
	cin.get();
	cin.get();
	return 0;
}