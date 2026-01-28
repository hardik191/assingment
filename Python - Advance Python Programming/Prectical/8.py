# Program to create a class and access its properties using an object

class Student:
    def __init__(self, name, age, course):
        self.name = name        
        self.age = age         
        self.course = course    

# Creating an object of Student class
student1 = Student("Hardik", 25, "Python Programming")

# Accessing properties
print("Student Name:", student1.name)
print("Student Age:", student1.age)
print("Student Course:", student1.course)
