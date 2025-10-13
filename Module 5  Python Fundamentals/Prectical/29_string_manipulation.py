# 29. Write a Python program that manipulates and prints strings using various string methods.
text = " Hello World "

print("Original String:", text)

print("Strip:", text.lstrip())

print("Uppercase:", text.upper())

print("Lowercase:", text.lower())

print("Replace 'World' with 'Python':", text.replace("World", "Python"))

print("Split into words:", text.split())

print("Starts with '  He':", text.startswith("  He"))
print("Ends with 'ld  ':", text.endswith("ld  "))

print("Position of 'World':", text.find("World"))
