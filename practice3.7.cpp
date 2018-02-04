#include <iostream>

int main()
{
	using namespace std;
	double a;

	cout << "欧洲风格汽车耗油量为______L/100km\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cin >> a;
	cout << "美国风格汽车耗油量为 " << 1 / (a /62.14 /3.875) << " mpg";
	cin.get();
	cin.get();
	return 0;
}