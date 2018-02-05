#include <iostream>
#include <cstring>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
		char first_name[20], last_name[40];

	cout << "Enter your first name: ";
	cin.getline(first_name, 20);
	cout << "Enter our last name: ";
	cin.getline(last_name, 20);
	strcat_s(last_name, ", ");
	strcat_s(last_name, first_name);
	cout << "Here's the information in a single string: " << last_name;
	cin.get();
	return 0;
}