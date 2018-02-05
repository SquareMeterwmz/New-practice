#include <iostream>
#include <string>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	using std::string;
	string first_name, last_name;

	cout << "Enter your first name: ";
	getline(cin,first_name);
	cout << "Enter our last name: ";
	getline(cin,last_name);
	cout << "Here's the information in a single string: " << last_name+", "+first_name;
	cin.get();
	return 0;
}