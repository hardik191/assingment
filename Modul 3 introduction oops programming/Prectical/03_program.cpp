// 5. Write two small programs: one using Procedural Programming (POP) to calculate the
// area of a rectangle, and another using Object-Oriented Programming (OOP) with a
// class and object for the same task.....

// 1. Procedural Programming (POP) Version

// #include <iostream>
// using namespace std;

// Function to calculate area of rectangle
// float calculateArea(float length, float width) {
//     return length * width;
// }

// int main() {
//     float length, width;

//     cout << "Enter the length of the rectangle: ";
//     cin >> length;

//     cout << "Enter the width of the rectangle: ";
//     cin >> width;

//     float area = calculateArea(length, width);
//     cout << "The area of the rectangle is: " << area << endl;

//     return 0;
// }

// 2. Object-Oriented Programming (OOP) Version

#include <iostream>
using namespace std;

// Class representing a Rectangle
class Rectangle
{
private:
    float length;
    float width;

public:
    // Method to set dimensions
    void setDimensions(float l, float w)
    {
        length = l;
        width = w;
    }

    // Method to calculate area
    float getArea()
    {
        return length * width;
    }
};

int main()
{
    Rectangle rect;
    float length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    rect.setDimensions(length, width);

    cout << "The area of the rectangle is: " << rect.getArea() << endl;

    return 0;
}
