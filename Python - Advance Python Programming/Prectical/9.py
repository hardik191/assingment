# Single Inheritance 

class Parent:
    def display_parent(self):
        print("This is the Parent class")

class Child(Parent):
    def display_child(self):
        print("This is the Child class")

obj = Child()
obj.display_parent()
obj.display_child()


# Multiple Inheritance Example

class Father:
    def father_feature(self):
        print("Father's feature")

class Mother:
    def mother_feature(self):
        print("Mother's feature")

class Child(Father, Mother):
    def child_feature(self):
        print("Child's feature")

obj = Child()
obj.father_feature()
obj.mother_feature()
obj.child_feature()


# Multilevel Inheritance Example

class Grandfather:
    def grand_info(self):
        print("Property from Grandfather")

class Father(Grandfather):
    def father_info(self):
        print("Property from Father")

class Son(Father):
    def son_info(self):
        print("Property from Son")

obj = Son()
obj.grand_info()
obj.father_info()
obj.son_info()


# Hierarchical Inheritance Example

class Animal:
    def eat(self):
        print("Animals can eat")

class Dog(Animal):
    def bark(self):
        print("Dog barks")

class Cat(Animal):
    def meow(self):
        print("Cat meows")

dog = Dog()
cat = Cat()

dog.eat()
dog.bark()

cat.eat()
cat.meow()


