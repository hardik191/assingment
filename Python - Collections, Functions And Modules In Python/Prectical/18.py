# 18.Write a Python program to generate random numbers using the random module

import random

# Generate a random integer between 1 and 10
ran_int = random.randint(1, 10)
print("Random integer between 1 and 10:", ran_int)

# Generate a random floating-point number between 0 and 1
ran_float = random.random()
print("Random float between 0 and 1:", ran_float)

# Generate a random number from a list
my_list = [10, 20, 30, 40, 50]
ran_choice = random.choice(my_list)
print("Random choice from list:", ran_choice)
