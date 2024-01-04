// Hello world example

// Preprocessor directive
// Preprocessor directives are statements that allow us to perform certain operations before the program is built
// The include directive is a very common directive that means "copy here." 
// In this case, the program copies the contents of the iostream header file into the application, which allows for use of input/output functionality
#include <iostream>

// The main() function marks the start of the application. 
// All C++ applications have this function. 
// When this function is complete, the application closes
int main()
{
    // This line of code allows the application to send text to the console. 
    // The iostream header is required for this line of code to work
    std::cout << "Hello World!";
    // This return statement signals that the current function is done running. 
    // A return value of 0 here denotes that the application ran without error
    return 0;
}