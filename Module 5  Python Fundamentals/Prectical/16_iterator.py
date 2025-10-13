# 16. Write a Python program that uses a custom iterator to iterate over a list of integers.

# Custom iterator class
class MyIterator:
    def __init__(self, data):
        self.data = data
        self.index = 0  # Start index

    def __iter__(self):
        return self  # The iterator object itself

    def __next__(self):
        if self.index < len(self.data):
            result = self.data[self.index]
            self.index += 1
            return result
        else:
            raise StopIteration  # End of iteration

# Sample list of integers
numbers = [10, 20, 30, 40, 50]

# Creating an iterator object
iter_obj = MyIterator(numbers)

# Iterating using the custom iterator
for num in iter_obj:
    print(num)
