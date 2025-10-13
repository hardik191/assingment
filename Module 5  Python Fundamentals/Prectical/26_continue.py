# 26. Write a Python program to skip 'banana' in a list using the continue
# statement. List1 = ['apple', 'banana', 'mango']

List1 = ['apple', 'banana', 'mango']

# Loop through the list
for fruit in List1:
    if fruit == 'banana':
        continue  
    print(fruit)
