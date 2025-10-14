# 10.Write a Python program to access alternate values between index 1 and 5 in a tuple.

test = (10, 20, 30, 40, 50, 60, 70, 80, 90, 10, 50)


# Access alternate values between index 1 and 5 
test1 = test[1:8:2]   
print("Alternate values between index 1 and 5:", test1)

print(test[1:6:2])