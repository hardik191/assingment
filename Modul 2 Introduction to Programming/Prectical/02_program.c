// 2. Write a C program that includes variables, constants, and comments. Declare and use different data types (int, char, float) and display their values.
#include <stdio.h>
#define PI 3.14159 // Constant using #define
int main()
{
    // Variable declarations
    int age = 20;             // Integer variable
    char grade = 'A';         // Character variable
    float percentage = 85.75; // Float variable
    const int YEAR = 2025;    // Constant using 'const'
    // Displaying values
    printf("Age: %d\n", age);
    printf("Grade: %c\n", grade);
    printf("Percentage: %.2f\n", percentage);
    printf("Current Year: %d\n", YEAR);
    printf("Value of PI: %.5f\n", PI);
    return 0;
}
