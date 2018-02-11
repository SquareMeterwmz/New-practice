#include <iostream>

int main()
{
	char words[20]{};
	int numbers{};
	using std::cin;
	using std::cout;

	for (int i=0;!((words[0]=='d')&&(words[1]=='o')&&(words[2]=='n')&&(words[3]=='e')&&(words[4]==' ')); )
	{
		cin.get(words[i]);
		if (words[i]== ' ')
		{
			i = 0;
			numbers++;
		}
		else
		{
			i++;
		}
	}
	cout << "You entered a total of " << numbers - 1 << " words";
	return 0;
}