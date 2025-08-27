// 6. Write a C program that uses the break statement to stop printing numbers when it reaches 5. Modify the program to skip printing the number 3 using the continue statement.
//  Part 1: Using break
#include <stdio.h>
int main() {
    int i;
    printf("Using break (stops at 5):\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5)
            break;  // stop loop when i is 5
        printf("%d ", i);
    }
    return 0;
}
// Part 2: Using continue
#include <stdio.h>
int main() {
    int i;
    printf("Using continue (skips 3):\n");
    for (i = 1; i <= 5; i++) {
        if (i == 3)
            continue;  // skip when i is 3
        printf("%d ", i);
    }
    return 0;
}
