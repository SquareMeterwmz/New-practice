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
	pizza pizza1;

	cout << "Please enter the name of the pizza company: ";
	getline(cin,pizza1.name);
	cout << "Please enter the diameter of the pizza producted by " << pizza1.name<<" : ";
	cin >> pizza1.diameter;
	cout<<"Please enter the weight of the pizza producted by " << pizza1.name << " : ";
	cin >> pizza1.weight;
	cout << endl << "Company: " << pizza1.name;
	cout << endl << "Diameter: " << pizza1.diameter;
	cout << endl << "Weight: " << pizza1.weight;
	cin.get();
	cin.get();
	return 0;
}