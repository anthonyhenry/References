// Unary Operators - demonstrate the use of unary operators

#include <iostream>

using namespace std;

int main()
{
    // The - operator changes the sign of its argument. A positive number becomes a negative and vice versa
    int n = 10;
    cout << "The value of n is " << n << endl;
    n = -n;
    cout << "The value of -n is " << n << endl;
    n = -n;
    cout << "The value of -n is now " << n << endl;

    cout << endl;

    // Prefix incremnt operator returns the value after the increment operation
    int x = 1;
    cout << "The value of x is " << x << endl;
    cout << "The value of ++x is " << ++x << endl;
    cout << "The value of x afterwards is " << x << endl;

    cout << endl;

    // Postfix increment operator returns the value before the increment
    int y = 1;
    cout << "The value of y is " << y << endl;
    cout << "The value of y++ is " << y++ << endl;
    cout << "The value of y afterwards is " << y << endl;

    // Wait until the user is ready before terminating the program so they can see the output results
    system("PAUSE");

    return 0;
}