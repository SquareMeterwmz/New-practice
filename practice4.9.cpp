#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
struct CandyBar
{
	string name;
	double weight;
	int calorie;
};

int main()
{
	CandyBar * pa = new CandyBar[3];

	pa[0].name = pa[1].name = pa[2].name =  "Mocha Munch";
	pa[0].calorie = pa[1].calorie = pa[2].calorie = 6;
	pa[0].weight = pa[1].weight = pa[2].weight =6;
	cout << pa[0].name << endl << pa[0].weight << endl << pa[0].calorie << endl;
	cout << pa[1].name << endl << pa[1].weight << endl << pa[1].calorie << endl;
	cout << pa[2].name << endl << pa[2].weight << endl << pa[2].calorie << endl;
	cin.get();
	delete [] pa;
	return 0;
}