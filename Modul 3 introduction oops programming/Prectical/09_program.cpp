// Write a C++ program that asks the user to guess a number between 1 and 100. The
// program should provide hints if the guess is too high or too low. Use loops to allow
// the user multiple attempts.

#include <iostream>
using namespace std;

int main()
{
    int secret = 7; // fixed secret number
    int guess;

    cout << " Guess the Number Game " << endl;
    cout << "I have chosen a number between 1 and 10." << endl;

    // keep looping until guess is correct
    do
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secret)
        {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < secret)
        {
            cout << "Too low! Try again." << endl;
        }
        else
        {
            cout << "Correct! The number was " << secret << endl;
        }
    } while (guess != secret);

    return 0;
}
