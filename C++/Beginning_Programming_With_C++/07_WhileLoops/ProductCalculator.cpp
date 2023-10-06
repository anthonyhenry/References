// Product Calculator - demonstrate the use of break and continue by multiplying numbers greater than 0

#include <iostream>

using namespace std;

int main()
{
    // Explain how the program works to the user
    cout << "This program multiplies numbers greater than 0.\nEnter a negative number to exit.\n0 will be ignored." << endl;
    
    // Prompt the user for the first number
    cout << "Please provide a number larger than 0: ";
    // Initialize a variable for the first number. This variable will be reused to store the running product
    int product;
    cin >> product;
    

    while(true) // This would be an infinite loop without the break and continue statements
    {
        // Prompt the user for a new number
        cout << "Please provide another number: ";
        int multiplier;
        cin >> multiplier;

        // Multiply numbers larger than 0
        if(multiplier > 0)
        {
            cout << product << " * " << multiplier << " = ";
            product *= multiplier;
            cout << product << endl;
        }
        // Ignore 0
        else if(multiplier == 0)
        {
            cout << "The number 0 has been provided. Ignoring." << endl;
            continue;
        }
        // Exit if a negative number has been given
        else
        {
            cout << "Negative number provided. Exiting program." << endl;
            break;
        }
    }
    
    system("PAUSE");
    return 0;
}