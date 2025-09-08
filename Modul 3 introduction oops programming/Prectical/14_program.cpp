// Write a program that demonstrates the difference between local and global
// variables in C++. Use functions to show scope.
#include <iostream>
using namespace std;

int x = 5;

void myFunction() {
    cout << "Inside myFunction(), x = " << x << endl;
}

int main() {
    myFunction();
    cout << "Inside main(), x = " << x << endl;
    return 0;
}


//local
#include <iostream>
using namespace std;

void myFunction() {
    int x = 5;
    cout << "Inside myFunction(), local x = " << x << endl;
}

int main() {
    myFunction();
    return 0;
}


//frmal
#include <iostream>
using namespace std;

void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Inside swap() after swapping:" << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
}

int main() {
    swap(10, 20);
    return 0;
}