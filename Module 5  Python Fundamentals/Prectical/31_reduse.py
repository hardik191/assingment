# 31. Write a Python program that uses reduce() to find the product of a list of numbers.
from functools import reduce

numbers = [1, 2, 3, 4, 5]

product = reduce(lambda x, y: x * y, numbers)

print("Product of all numbers:", product)
