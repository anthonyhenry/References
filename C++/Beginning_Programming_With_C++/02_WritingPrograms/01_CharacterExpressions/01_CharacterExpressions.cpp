// Character Encoding - allow the user to enter a numeric value then print that value as its ASCII character
// Chart of ASCII character encoding: https://www.ascii-code.com/

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
	//Character constants are defined as a single charactar enclosed in single quotes
	char letterA = 'A';

	//Prompt the user for a value
	int inputNum;
	cout << "Enter a number between 0 and 127: ";
	cin >> inputNum;

	//Convert the integer value to its corresponding ascii encoding
	char asciiCharacter = (char)inputNum;
	//Now print the corresponding ascii character
	cout << "The ASCII character encoding for the number you gave is [" << asciiCharacter << "]" << endl;

	system("PAUSE");
}