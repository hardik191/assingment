// Write a C++ program that calculates the factorial of a number using recursion.

#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if(n <= 1)
        return 1; // Base case
    else
        return n * factorial(n - 1); // Recursive call
}

int main() {
    int number;

    cout << "Enter a non-negative integer: ";
    cin >> number;

    if(number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else {
        int result = factorial(number);
        cout << "Factorial of " << number << " is " << result << endl;
    }

    return 0;
}

