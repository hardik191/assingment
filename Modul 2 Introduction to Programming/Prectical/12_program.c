// 12. Write a C program to create a file, write a string into it, close the file, then open the file again to read and display its contents.
#include <stdio.h>
int main()
{
    FILE *fptr;
    char str[100] = "Hello, this is a file handling example in C!";
    char readStr[100];
    // Step 1: Create and write to file
    fptr = fopen("example.txt", "w"); // Open in write mode
    if (fptr == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fptr, "%s", str); // Write string to file
    fclose(fptr);             // Close the file after writing
    // Step 2: Reopen and read from file
    fptr = fopen("example.txt", "r"); // Open in read mode
    if (fptr == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    fgets(readStr, sizeof(readStr), fptr); // Read string from file
    printf("File content: %s\n", readStr);
    fclose(fptr); // Close the file after reading
    return 0;
}
