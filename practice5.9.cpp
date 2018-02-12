#include <iostream>
#include <string>

int main()
{
	using std::cin;
	using std::cout;
	using std::string;
	string word;
	int number{};

	cout << "Enter words (to stop, type the word done): \n";
	for (;word!="done";)
	{
		cin >> word;
		number++;
	}
	cout << "You entered a total of " << number - 1 << " words.";
	cin.get();
	return 0;
}