#include <iostream>

int main()
{
	using namespace std;
	const double A{ 12 };
	const double B{ 0.0254 };
	const double C{ 2.2 };
	double height1, height2, height;
	double weight;
	cout << "��������__Ӣ��\b\b\b\b\b\b";
	cin >> height1;
	cout << "__Ӣ��\b\b\b\b\b\b";
	cin >> height2;
	height = height1*A + height2;
	cout << "���������__��\b\b\b\b";
	cin >> weight;
	cout << "\n��������" << height << "Ӣ�硣\n";
	height = height*B;
	weight = weight*C;
	cout << "���BMI=" << height/(weight*weight);
	cin.get();
	cin.get();
	return 0;
}