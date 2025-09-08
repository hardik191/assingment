// Write a C++ program to check if a given string is a palindrome (reads the same
// forwards and backwards).

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int length = str.length();
    bool isPalindrome = true;

    // Check palindrome
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        cout << str << " is a palindrome." << endl;
    }
    else
    {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}
