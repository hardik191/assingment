// 3. Write a C program that accepts two integers from the user and performs arithmetic, relational, and logical operations on them. Display the results.
#include <stdio.h>
int main()
{
    int a, b;

    // Input from user
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    // Arithmetic Operations
    printf("\n--- Arithmetic Operations ---\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    // Relational Operations
    printf("\n--- Relational Operations ---\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b : %d\n", a > b);
    printf("a < b : %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);
    // Logical Operations
    printf("\n--- Logical Operations ---\n");
    printf("a && b = %d\n", a && b); // true if both non-zero
    printf("a || b = %d\n", a || b); // true if at least one non-zero
    printf("!a = %d\n", !a);         // true if a is zero
    printf("!b = %d\n", !b);         // true if b is zero
    return 0;
}
