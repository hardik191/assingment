# 32. Write a Python program that filters out even numbers using the filter() function.

numbers = [1, 2, 3, 4, 5, 6]

odd_numbers = list(filter(lambda x: x % 2 != 0, numbers))

print("Odd numbers:", odd_numbers)
