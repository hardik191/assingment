// Write a C++ program that demonstrates the use of variables and constants. Create
// variables of different data types and perform operations on them.

#include <iostream>
using namespace std;

int main()
{
    // Variables of different data types
    int a = 10;
    float b = 5.5;
    double c = 20.25;
    char grade = 'A';
    bool isPassed = true;

    // Constant
    const float PI = 3.14159;

    // Display variable values
    cout << "Integer a: " << a << endl;
    cout << "Float b: " << b << endl;
    cout << "Double c: " << c << endl;
    cout << "Character grade: " << grade << endl;
    cout << "Boolean isPassed: " << isPassed << endl;
    cout << "Constant PI: " << PI << endl
         << endl;

    // Perform operations
    int sum = a + b;
    double product = b * c;
    int incremented = a + 1;

    cout << "Sum of a and b: " << sum << endl;
    cout << "Product of b and c: " << product << endl;
    cout << "Incremented value of a: " << incremented << endl;

    return 0;
}
