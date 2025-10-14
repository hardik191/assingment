# 14.Write a Python program to merge two lists into one dictionary using a loop.

#  Merge two lists into one dictionary using a loop 
keys = ["name", "age", "city"]
values = ["Amit", 25, "Surat"]

merged_dict = {}

# Use a loop to merge lists into a dictionary
for i in range(len(keys)):
    merged_dict[keys[i]] = values[i]

print("Merged Dictionary:", merged_dict)
