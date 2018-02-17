#include <iostream>
struct bop
{
	char fullname[20];
	char title[20];
	char bopname[20];
	int preference;
};
const int SIZE = 3;

int main()
{
	using std::cout;
	using std::cin;
	bop people[SIZE]{ {"sdf","dfga","ass",2},{"sdf","asdf","avz",0},{"searfr","vbsfkdbg","bafihargbf",1} };
	char ch;

	cout << "a.display by name      b.display by title\n";
	cout << "c.dis play by bopname  d.display by preference\n";
	cout << "q.quit\n";
	cout << "Enter your choice: ";
	cin >> ch;
	while (ch!='q')
	{
		switch (ch)
		{
		case 'a':for (int i = 0; i < SIZE; i++)cout<<(people[i]).fullname<<"\n"; break;
		case 'b':for (int i = 0; i < SIZE; i++)cout << (people[i]).title << "\n"; break;
		case 'c':for (int i = 0; i < SIZE; i++)cout << (people[i]).bopname << "\n"; break;
		case 'd':for (int i = 0; i < SIZE; i++)
			switch ((people[i]).preference)
			{
			case 0:cout << (people[i]).fullname << "\n"; break;
			case 1:cout << (people[i]).title << "\n"; break;
			case 2:cout << (people[i]).bopname << "\n"; break;
			}; break;
		}
		cout << "Next choice: ";
		cin >> ch;
	}
	cout<< "Bye!";
	cin.get();
	cin.get();
	return 0;
}
