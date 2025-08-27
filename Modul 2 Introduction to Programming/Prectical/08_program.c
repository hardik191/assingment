// 8. Write a C program that stores 5 integers in a one-dimensional array and prints them. Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements.
// Part 1: One-Dimensional Array (1D)
#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    printf("One-Dimensional Array Elements:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
// Part 2: Two-Dimensional Array (3x3 Matrix) and Sum
#include <stdio.h>
void main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value :");
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nYour value :%d", a[i][j]);
        }
    }
}
