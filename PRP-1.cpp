#include <iostream>
const int A = 5, B = 4, C = 3, D = 2, E = 1;

int main()
{
	using std::cout;
	using std::cin;
	double a, b, c, d, e{};

	cout << "Please enter the number of A,B,C,D,E (enter q to quit)\n";
	cout << "The number of A: ";
	cin >> a;
	do
	{
		cout << "The number of B: ";
		cin >> b;
		cout << "The number of C: ";
		cin >> c;
		cout << "The number of D: ";
		cin >> d;
		cout << "The number of E: ";
		cin >> e;
		cout << "Average rank: " << (a*A + b*B + c*C + d*D + e*E) / (a + b + c + d + e);
		cout << "\nPlease enter the number of A,B,C,D,E (enter -1 to quit)\n";
		cout << "The number of A: ";
		cin >> a;
	} while (-1 != a);
	cin.get();
	return 0;
}