

# Opening the file in write mode
file = open("multiple.txt", "w")

# List of strings to write
lines = [
    "Hello, this is line 1.\n",
    "This is line 2.\n",
    "Python file handling is easy.\n",
    "This is the last line.\n"
]

# Writing all strings to the file
file.writelines(lines)

# Closing the file
file.close()

print("Multiple strings written to file successfully.")
