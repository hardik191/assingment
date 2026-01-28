# Program to demonstrate handling multiple exceptions

try:
    number = int(input("Enter a number: "))
    divisor = int(input("Enter a divisor: "))

    result = number / divisor
    print("Result:", result)

    my_list = [10, 20, 30]
    index = int(input("Enter index to access (0-2): "))
    print("List value:", my_list[index])

except ZeroDivisionError:
    print("Error: Division by zero is not allowed.")

except ValueError:
    print("Error: Invalid input! Please enter numeric values only.")

except IndexError:
    print("Error: Index out of range! Valid indices are 0, 1, 2.")

except Exception as e:
    print("Unexpected error occurred:", e)

finally:
    print("Program completed.")
