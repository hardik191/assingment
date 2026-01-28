# Method Overloading using default arguments

class MathOperations:
    def add(self, a=0, b=0, c=0):
        return a + b + c

obj = MathOperations()

print("Addition of two numbers:", obj.add(10, 20))
print("Addition of three numbers:", obj.add(10, 20, 30))
print("Addition with one number:", obj.add(5))


# Method Overriding 

class Parent:
    def show(self):
        print("This is the parent class method")

class Child(Parent):
    def show(self):   # overriding parent method
        print("This is the child class method")

obj = Child()
obj.show()
