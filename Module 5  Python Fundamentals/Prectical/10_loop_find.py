# 10. Practical Example 1: Write a Python program to print each fruit in a list using a simple for
# loop. List1 = ['apple', 'banana', 'mango']

# Program to find a specific string in a list

List1 = ['apple', 'banana', 'mango']
search_item = input("Enter the fruit to search: ")

rangediya = False  # Flag to check if the fruit is found

for fruit in List1:
    if fruit == search_item:
        print(search_item, "is found in the list.")
        ranghediya = True
        break

if not ranghediya:
    print(search_item, "is not found in the list.")
