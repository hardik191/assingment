# Program to handle exceptions in a simple calculator

try:
    num1 = float(input("Enter first number: "))
    num2 = float(input("Enter second number: "))

    result = num1 / num2

    print(f"The result of division is: {result}")

except ZeroDivisionError:
    print("Error: Division by zero is not allowed.")

except ValueError:
    print("Error: Invalid input! Please enter only numbers.")

finally:
    print("Calculator program ended.")
