// 10. Write a C program that takes two strings from the user and concatenates them using strcat(). Display the concatenated string and its length using strlen().

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[50];
    // Input strings from user
    printf("Enter first string: ");
    gets(str1); // Note: gets() is unsafe; use fgets() in practice
    printf("Enter second string: ");
    gets(str2);
    // Concatenate str2 to str1
    strcat(str1, str2);
    // Display the concatenated string
    printf("Concatenated string: %s\n", str1);
    // Find and display the length
    int length = strlen(str1);
    printf("Length of concatenated string: %d\n", length);
    return 0;
}
