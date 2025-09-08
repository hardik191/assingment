// Write a program that prints a right-angled triangle using stars (*) with a nested loop.

#include <iostream>
using namespace std;

int main()
{
    int rows;

    // Input number of rows
    cout << "Enter the number of rows for the triangle: ";
    cin >> rows;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++)
    {
        // Inner loop for stars in each row
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl; // Move to next line after each row
    }

    return 0;
}
