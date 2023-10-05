// Switch Calculator - A Simple calculator that demonstrates the use of switch statments

#include <iostream>

using namespace std;

int main()
{
    //Declare variables
    int value1;
    int value2;
    char operation;

    //Introduce program
    cout << "This is a simple calculator." << endl;

    //Get first number from user input
    cout << "Please provide a number: ";
    cin >> value1;

    //Get operation from user input
    cout << "Please provide a mathematical operation to perform: ";
    cin >> operation;

    //Get second number from user input
    cout << "Please provide another number: ";
    cin >> value2;

    //Ouptut expression
    cout << value1 << " " << operation << " " << value2 << " = ";


    //Switch statement for performing math
    switch (operation)
    {
        case '+': //You cannot supply an expression after a case. Only constant values
            cout << value1 + value2;
            break; //Breaks are optional. They exit the switch statment. Best to include breaks since the expression can only equal one value
        case '-':
            cout << value1 - value2;
            break;
        case 'x': //You can have multiple cases like this
        case 'X':
        case '*':
            cout << value1 * value2;
            break;
        case '/':
            cout << value1 / value2;
            break;
        default: //The default case is optional. It runs if none of the above cases are matched
            cout << "Could not compute";
    }

    cout << endl;

    system("PAUSE");
    
    return 0;
}