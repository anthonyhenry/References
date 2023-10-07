// Multiplication Table - program that creates a multiplication table using nested while loops

#include <iostream>

using namespace std;

int main()
{
    // Initialize variables for rows and columns
    int row = 0;
    int column = 0;

    // Loop through the row numbers
    while(row <= 12)
    {
        // Loop through each column
        while(column <= 12)
        {
            // For the first cell of the table print an X
            if(row == 0 && column == 0)
            {
                cout << "X";
            }
            // First row should only show column numbers
            else if(row == 0)
            {
                cout << column;
            }
            // First column should only show row numbers
            else if(column == 0)
            {
                cout << row;
            }
            else
            {
                // Multiply the row by the column
                int product = row * column;
                // Print the result
                cout << product;
            }
            // Add a tab after each number for spacing
            cout << "\t";
            // Move on to the next column
            column++;
        }
        // Move on the the next row
        row++;
        // Reset the column number
        column = 0;
        // Start a new line
        cout << endl;
    }

    system("PAUSE");
    return 0;
}