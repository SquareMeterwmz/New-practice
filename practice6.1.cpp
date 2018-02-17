#include <iostream>
#include <cctype>

int main()
{
	using std::cout;
	using std::cin;
	char ch;
	do
	{
		cin.get(ch);
		if (islower(ch))
		{
			ch = toupper(ch);
		}
		else
		{
			ch = tolower(ch);
		}
		cout << ch;
	} while (ch!='@');
	cin.clear();
	cin.get();
	return 0;
}