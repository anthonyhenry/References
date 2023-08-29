// Gen Z or not

#include <iostream>

using namespace std;

int main()
{
	int birthYear;

	cout << "Enter your birth year: ";
	cin >> birthYear;

	cout << "You were born in ";

	if (birthYear > 2000)
	{
		cout << "the 21st century.";
	}
	else
	{
		if (birthYear < 1950)
		{
			cout << "the first half of the 20th century.";
		}
		else
		{
			cout << "the second half of the 20th century.";
		}
	}

	cout << endl;

	system("PAUSE");

}