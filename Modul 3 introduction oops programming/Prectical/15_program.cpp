// Write a C++ program that accepts an array of integers, calculates the sum and
// average, and displays the results.

#include <iostream>
using namespace std;

int main()
{
    int n;

    // Input size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n]; // Array declaration
    int sum = 0;
    double average;

    // Input array elements
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i]; // Calculate sum while reading input
    }

    // Calculate average
    average = static_cast<double>(sum) / n;

    // Display results
    cout << "Sum of array elements: " << sum << endl;
    cout << "Average of array elements: " << average << endl;

    return 0;
}
