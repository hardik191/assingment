// 10.Write a C++ program that performs both implicit and explicit type conversions and
// prints the results.

// #include <iostream>
// using namespace std;

// int main() {
//     // Implicit Type Conversion (Automatic)
//     int intVal = 10;
//     double doubleVal;

//     doubleVal = intVal;  // int is automatically converted to double
//     cout << "Implicit Conversion: int " << intVal
//          << " to double gives " << doubleVal << endl;

//     // Explicit Type Conversion (Type Casting)
//     double num1 = 9.78;
//     int num2;

//     num2 = (int)num1;  // Explicit conversion from double to int
//     cout << "Explicit Conversion: double " << num1
//          << " to int gives " << num2 << endl;

//     // Using static_cast (C++ style explicit conversion)
//     float f = 5.75;
// //     int i = static_cast<int>(f);
// int i = int(f);
//     cout << "Explicit Conversion using static_cast: float " << f
//          << " to int gives " << i << endl;

//     return 0;
// }
