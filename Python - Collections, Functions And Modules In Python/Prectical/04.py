# 4.Write a Python program to remove elements from a list using pop() and remove()

test = [10, 20, 30, 40]
print("Original List:", test)

# Remove 
test.remove(30)
print("After remove(30):", test)

# pop
removed_element = test.pop(1)  
print("After pop(1):",test)
print("Removed Element:", removed_element)
