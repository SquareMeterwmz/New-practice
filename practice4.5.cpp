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
	CandyBar snack{ "Mocha Munch", 2.3,250};
	
	cout << snack.name<<endl<<snack.weight<<endl<<snack.calorie;
	cin.get();
	return 0;
}