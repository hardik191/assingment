import re

# Input string
text = "Python is a powerful programming language."

# Word to search
word = "powerful77"

# Using re.search()
result = re.search(word, text)

if result:
    print(f"Word '{word}' found at position:", result.start())
else:
    print(f"Word '{word}' not found in the string.")
