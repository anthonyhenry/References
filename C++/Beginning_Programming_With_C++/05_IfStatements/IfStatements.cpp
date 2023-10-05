// Is Statements - Determine what century the user was born

#include <iostream>

using namespace std;

int main()
{
    // Initialize a birth year varaible
    int birthYear;

    // Prompt the user for their birth year
    cout << "Enter your birth year: ";
    cin >> birthYear;

    cout << "You were born ";

    if(birthYear < 1900)
    {
        cout << "before the 20th century.";
    }
    else if(birthYear > 2000)
    {
        cout << " in the 21st century.";
    }
    else
    {
        if(birthYear < 1950)
        {
            cout << " in the first half of the 20th century.";
        }
        else
        {
            cout << " in the second half of the 20th century.";
        }
    }

    cout << endl;

    system("PAUSE");

    return 0;
}