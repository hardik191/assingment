//  Write a C++ program to display the multiplication table of a given number using a for loop.

#include <iostream>
using namespace std;

int main()
{
    int number;

    // Input the number
    cout << "Enter a number to display its multiplication table: ";
    cin >> number;

    cout << "Multiplication Table of " << number << ":" << endl;

    // Using for loop to display the table
    for (int i = 1; i <= 10; i++)
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}
