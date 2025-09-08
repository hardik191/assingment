// Write a program that implements inheritance using a base class Person and derived
// classes Student and Teacher. Demonstrate reusability through inheritance.

#include <iostream>
#include <string>
using namespace std;

// Base class
class Person
{
protected:
    string name;
    int age;

public:
    void setDetails(string n, int a)
    {
        name = n ;
        age = a;
    }

    void displayDetails()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class Student
class Student : public Person
{
private:
    string course;

public:
    void setCourse(string c)
    {
        course = c;
    }

    void displayStudent()
    {
        displayDetails(); // Reusing base class function
        cout << "Course: " << course << endl;
    }
};

// Derived class Teacher
class Teacher : public Person
{
private:
    string subject;

public:
    void setSubject(string s)
    {
        subject = s;
    }

    void displayTeacher()
    {
        displayDetails(); // Reusing base class function
        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    // Creating Student object
    Student student1;
    student1.setDetails("Alice", 20);
    student1.setCourse("Computer Science");
    cout << "Student Details:" << endl;
    student1.displayStudent();
    cout << endl;

    // Creating Teacher object
    Teacher teacher1;
    teacher1.setDetails("Mr. Bob", 45);
    teacher1.setSubject("Mathematics");
    cout << "Teacher Details:" << endl;
    teacher1.displayTeacher();

    return 0;
}
