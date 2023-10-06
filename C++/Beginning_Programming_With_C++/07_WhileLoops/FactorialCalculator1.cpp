// Factorial Calculator - Calculates factorials using while loops

#include <iostream>

using namespace std;

int main()
{
    // Prompt the user for a number to calculate the factorial of
    int factorial;
    cout << "This program calculates factorial. \nEnter a number to take the factorial of: ";
    cin >> factorial;

    // Factorial of 0 is always 1
    if(factorial == 0)
    {
        cout << "Factorial " << factorial << " is 1"; 
    }
    else
    {
        // Initialize variables for calculation
        int multiplier = factorial - 1;
        int multiplicand = factorial;
        int total = 0; // This variable keeps track of the total factorial

        while(multiplier > 1)
        {
            // Show the math
            cout << multiplicand << " * " << multiplier << " = ";

            total = multiplicand * multiplier;
            multiplicand = total;
            multiplier--;

            cout << total << endl;
        }

        cout << "Factorial " << factorial << " is " << total << endl; 
    }

    system("PAUSE");
    return 0;
}