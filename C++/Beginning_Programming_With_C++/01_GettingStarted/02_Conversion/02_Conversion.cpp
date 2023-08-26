// Conversion - Program to convert temperatures from Celsius to Fahrenheit

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
	// Enter the temperature in Celsius
	int celsius;
	cout << "Enter the temperature in Celsius: ";
	cin >> celsius;

	//Convert Celsius to Fahrenheit
	int fahrenheit;
	fahrenheit = celsius * 9 / 5 + 32;

	//Output the results
	cout << "Fahrenheit value is: " << fahrenheit << endl;

	//Wait until the user is ready before terminating program so they can see the output resultss
	system("PAUSE");

	return 0;

}