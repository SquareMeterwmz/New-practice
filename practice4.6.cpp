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
	CandyBar snack[3]{ { "Mocha Munch", 2.3,250 },{ "Mocha Munch", 2.3,250 },{ "Mocha Munch", 2.3,250 } };

	cout << snack[1].name << endl << snack[1].weight << endl << snack[1].calorie<<endl;
	cout << snack[2].name << endl << snack[2].weight << endl << snack[2].calorie << endl;
	cout << snack[2].name << endl << snack[2].weight << endl << snack[2].calorie << endl;
	cin.get();
	return 0;
}