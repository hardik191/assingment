// Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
// operators. Perform operations using each type of operator and display the results.

#include <iostream>
using namespace std;

int main()
{
    // Variables
    int a = 10, b = 3;

    cout << "=== Arithmetic Operators ===" << endl;
    cout << "a + b = " << a + b << endl;                  // Addition
    cout << "a - b = " << a - b << endl;                  // Subtraction
    cout << "a * b = " << a * b << endl;                  // Multiplication
    cout << "a / b = " << a / b << endl;                  // Division
    cout << "a % b = " << a % b << endl;                  // Modulus
    cout << "++a = " << ++a << ", b-- = " << b-- << endl; // Increment & Decrement

    cout << "\n=== Relational Operators ===" << endl;
    cout << "a == b: " << (a == b) << endl; // Equal to
    cout << "a != b: " << (a != b) << endl; // Not equal to
    cout << "a > b: " << (a > b) << endl;   // Greater than
    cout << "a < b: " << (a < b) << endl;   // Less than
    cout << "a >= b: " << (a >= b) << endl; // Greater or equal
    cout << "a <= b: " << (a <= b) << endl; // Less or equal

    cout << "\n=== Logical Operators ===" << endl;
    bool x = true, y = false;
    cout << "x && y: " << (x && y) << endl; // Logical AND
    cout << "x || y: " << (x || y) << endl; // Logical OR
    cout << "!x: " << (!x) << endl;         // Logical NOT

    cout << "\n=== Bitwise Operators ===" << endl;
    int p = 5, q = 3;                        // Binary: 5=0101, 3=0011
    cout << "p & q = " << (p & q) << endl;   // AND
    cout << "p | q = " << (p | q) << endl;   // OR
    cout << "p ^ q = " << (p ^ q) << endl;   // XOR
    cout << "~p = " << (~p) << endl;         // NOT
    cout << "p << 1 = " << (p << 1) << endl; // Left shift
    cout << "p >> 1 = " << (p >> 1) << endl; // Right shift

    return 0;
}
