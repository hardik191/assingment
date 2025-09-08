// Write a C++ program that defines functions for basic arithmetic operations (add,
// subtract, multiply, divide). The main function should call these based on user input.

#include <iostream>
using namespace std;

// Function to add two numbers
double add(double a, double b)
{
    return a + b;
}

// Function to subtract two numbers
double subtract(double a, double b)
{
    return a - b;
}

// Function to multiply two numbers
double multiply(double a, double b)
{
    return a * b;
}

// Function to divide two numbers
double divide(double a, double b)
{
    return a / b;
}

int main()
{
    double num1, num2;
    int choice;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nSelect operation:\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Result: " << add(num1, num2) << endl;
        break;
    case 2:
        cout << "Result: " << subtract(num1, num2) << endl;
        break;
    case 3:
        cout << "Result: " << multiply(num1, num2) << endl;
        break;
    case 4:
        cout << "Result: " << divide(num1, num2) << endl;
        break;
    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
