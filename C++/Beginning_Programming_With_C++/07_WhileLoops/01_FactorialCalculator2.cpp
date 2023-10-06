// Factorial Calculator - Calculates factorials using a while

#include <iostream>

using namespace std;

int main()
{
    // Prompt the user for a number to calculate the factorial of
    int factorial;
    cout << "This program calculates factorial. \nEnter a number to take the factorial of: ";
    cin >> factorial;

    // Initialize variables for calculation
    int total = 1; // Variable to keep track of the factorial total; initialized at 1 so that 0 and 1 factorial equal 1
    int multiplier = factorial; // Number to multiply the running total by

    while(multiplier > 1) // This expression makes it so that 0 and 1 will have a factorial of 1
    {
        //Show the math
        cout << total << " * " << multiplier << " = ";
        total *= multiplier;
        cout << total << endl;

        // Decrement multiplier
        multiplier--; // Always remember to manupulate the condition in the while loop so that it eventually returns False
    }

    cout << "Factorial " << factorial << " is " << total << endl; 

    system("PAUSE");
    return 0;
}