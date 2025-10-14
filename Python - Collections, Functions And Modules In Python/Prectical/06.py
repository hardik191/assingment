# 6.Write a Python program to sort a list using both sort() and sorted().

numbers = [45, 12, 78, 34, 23, 56]

# Sort the list using sort() 
numbers.sort()
print(numbers)

# Sort the list using sorted()
unsorted_list = [9, 3, 6, 2, 8]
sorted_list = sorted(unsorted_list)

print("\nOriginal list (unsorted):", unsorted_list)
print("New sorted list (using sorted):", sorted_list)
