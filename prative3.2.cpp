#include <iostream>

int main()
{
	using namespace std;
	const double A{ 12 };
	const double B{ 0.0254 };
	const double C{ 2.2 };
	double height1, height2, height;
	double weight;
	cout << "你的身高是__英尺\b\b\b\b\b\b";
	cin >> height1;
	cout << "__英寸\b\b\b\b\b\b";
	cin >> height2;
	height = height1*A + height2;
	cout << "你的体重是__磅\b\b\b\b";
	cin >> weight;
	cout << "\n你的身高是" << height << "英寸。\n";
	height = height*B;
	weight = weight*C;
	cout << "你的BMI=" << height/(weight*weight);
	cin.get();
	cin.get();
	return 0;
}