#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
struct pizza
{
	string name;
	double diameter, weight;
};

int main()
{
	pizza * ppizza1 = new pizza;
	cout << "Please enter the diameter of the pizza: ";
	cin >> (*ppizza1).diameter;
	cout << "Please enter the name of the pizza company: ";
	cin.get();
	getline(cin, (*ppizza1).name);
	cout << "Please enter the weight of the pizza producted by " << (*ppizza1).name << " : ";
	cin >> (*ppizza1).weight;
	cout << endl << "Company: " << (*ppizza1).name;
	cout << endl << "Diameter: " << (*ppizza1).diameter;
	cout << endl << "Weight: " << (*ppizza1).weight;
	delete ppizza1;
	cin.get();
	cin.get();
	return 0;
}