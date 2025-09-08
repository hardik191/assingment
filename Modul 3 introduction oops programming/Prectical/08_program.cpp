// Write a C++ program that takes a student’s marks as input and calculates the grade
// based on if-else conditions.

#include <iostream>
using namespace std;

int main()
{
    int marks;
    char grade;

    // Input marks
    cout << "Enter your marks (0-100): ";
    cin >> marks;

    // Determine grade using if-else
    if (marks >= 90 && marks <= 100)
        grade = 'A';
    else if (marks >= 80)
        grade = 'B';
    else if (marks >= 70)
        grade = 'C';
    else if (marks >= 60)
        grade = 'D';
    else if (marks >= 0)
        grade = 'F';
    else
    {
        cout << "Invalid marks entered!" << endl;
        return 0; // Exit program if input is invalid
    }

    // Display result
    cout << "Your grade is: " << grade << endl;

    return 0;
}
