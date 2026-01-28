import re

text = "Python is easy to learn."

# Word to match at the beginning
word = "Python"

# Using re.match()
result = re.match(word, text)

if result:
    print(f"Word '{word}' matched at the beginning of the string.")
else:
    print(f"Word '{word}' did NOT match at the beginning.")
