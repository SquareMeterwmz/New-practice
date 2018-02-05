#include <iostream>
#include <string>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	using std::string;
	string name, dessert;

	cout << "Enter your name:\n";
	getline(cin, name);
	cout << "Enter your favorite dessert :\n";
	getline(cin, dessert);
	cout << "I have some delicious " << dessert << " for you, " << name << endl;
	cin.get();
	cin.get();
	return 0;
}