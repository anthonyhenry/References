// If Statement Demonstration

#include <iostream>

using namespace std;

int main()
{
    //Declare integer variables for comparison
    int num1;
    int num2;

    cout << "Enter a number: ";
    cin >> num1;

    cout << "Enter another number: ";
    cin >> num2;

    //Compare numbers
    if (num1 > num2)
    {
        cout << num1 << " is greater than " << num2 << endl;
    }
    else if (num1 < num2)
    {
        cout << num1 << " is less than " << num2 << endl;
    }
    else
    {
        cout << "Both numbers are the same" << endl;
    }

    system("PAUSE");
    return 0;
}