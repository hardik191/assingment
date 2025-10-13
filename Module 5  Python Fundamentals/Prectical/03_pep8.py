# 3. Write a Python program that demonstrates the correct use of indentation, comments, and
# variables following PEP 8 guidelines.

# Define variables
math_marks = 40
science_marks = 90
english_marks = 80

# Calculate total and average
total_marks = math_marks + science_marks + english_marks
average_marks = total_marks / 3

# indentation
if average_marks >= 90:
    grade = "A+"
elif average_marks >= 80:
    grade = "A"
elif average_marks >= 70:
    grade = "B"
else:
    grade = "C"

# Display results
print("Student Report")
print("----------------")
print("Math Marks:", math_marks)
print("Science Marks:", science_marks)
print("English Marks:", english_marks)
print("Average Marks:", average_marks)
print("Grade:", grade)
