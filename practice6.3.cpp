#include <iostream>

int main()
{
	using std::cout;
	using std::cin;
	char ch;
	cout << "Please enter one of the following choices: \n";
	cout << "c) carnivore\tp) pianist\n";
	cout << "t) tree\t\tg) game";
	cin.get(ch);
	while (ch!='c'&&ch!='p' &&ch != 't' && ch != 'g')
	{
		cout << "Please enter a c, p, t, or g: ";
		cin>>ch;
		
	}
	switch (ch)
	{
		case 'c':cout << 'c'; break;
		case 'p':cout << 'p'; break;
		case 't':cout << 't'; break;
		case 'g':cout << 'g'; break;
	}
	cin.get();
	cin.get();
	return 0;
}