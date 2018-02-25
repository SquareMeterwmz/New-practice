#include <iostream>
#include <string>
#include <cctype>

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	std::string word;
	int vowels=0, consonants=0, others{};

	
	cout << "Enter words (q to quit): \n";
	while (cin>>word&&word!="q")
	{
		if (std::isalpha(word[0]))
		{
			switch (word[0])
			{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':vowels++; break;
			default:consonants++;
				break;
			};
		}
		else
		{
			others++;
		}
	}
	cout << vowels << " words beginning with vowels\n";
	cout << consonants << " words beginning with consonants\n";
	cout << others << " others";
	cin.clear();
	cin.get();
	cin.get();
	cin.get();
	return 0;
}