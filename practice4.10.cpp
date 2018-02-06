#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::array;

int main()
{
	array<double, 3>grade;
	cout << "Please enter 3 grades of 40 Meters Racing: \nThe first grade: ";
	cin >> grade[0];
	cout << "The second grade: ";
	cin >> grade[1];
	cout << "The last grade: ";
	cin >> grade[2];
	cout << "The times of your racing is 3\nThe average grade is " << (grade[0] + grade[1] + grade[2]) / 3;
	cin.get();
		cin.get();
		return 0;
}