// 9. Write a C program to demonstrate pointer usage. Use a pointer to modify the value of a variable and print the result.
#include <stdio.h>
int main()
{
    int num = 10;
    int *ptr;
    ptr = &num;                                 // ptr stores the address of num
    *ptr = 20;                                  // modify the value of num using pointer
    printf("Value of num = %d\n", num);         // Output: 20
    printf("Address of num = %p\n", &num);      // Prints address
    printf("Value using pointer = %d\n", *ptr); // Output: 20
    return 0;
}
