#include <iostream>

int main()
{
	using namespace std;
	const int DAY = 60 * 60 * 24, HOUR = 60 * 60, MINUTE = 60;
	long long seconds;

	cout << "Enter the number of seconds: ";
	cin >> seconds;
	cout << seconds << " seconds = " << seconds / DAY << " days, " << seconds % DAY / HOUR << " hours, " << seconds%HOUR / MINUTE << " minutes, " << seconds%MINUTE << " seconds";
	cin.get();
	cin.get();
	return 0;
}