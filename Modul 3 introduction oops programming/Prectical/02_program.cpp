// Write a C++ program that accepts user input for their name and age and then displays a personalized greeting.

#include <iostream>
#include <string>
using namespace std; // This allows us to use cout, cin, string directly

int main()
{
    string name;
    int age;

    // Ask for user input
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age; // Read age

    // Display personalized greeting
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    return 0;
}
