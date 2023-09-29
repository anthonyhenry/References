// Conversion - Program to convert temperatures from Celsius to Fahrenheit
// #include <cstdio>
// #include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    // Prompt user to enter temperature in Celsius
    int celsius;
    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit
    int fahrenheit = celsius * 9/5 + 32;

    // Output results
    cout << "Fahrenheit value is: " << fahrenheit << endl;

    // Wait until the user is ready before terminating the program so they can see the output results
    system("PAUSE");

    return 0;
}