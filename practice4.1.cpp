#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
struct student
{
	string first_name;
	string last_name;
	char grade;
	int age;
}student1;

int main()
{
		cout << "What is your first name? ";
	getline(cin,student1.first_name);
	cout << "What is your last name? ";
	getline(cin,student1.last_name);
	cout << "What letter grade do you deserve? ";
	cin >> student1.grade;
	cout << "What is your age? ";
	cin >> student1.age;
	cout << "Name: " << student1.last_name << " , " << student1.first_name<<endl;
	cout << "Grade: " << char(int(student1.grade) + 1)<<endl;
	cout << "Age: " << student1.age;
	cin.get();
	cin.get();
	return 0;
}