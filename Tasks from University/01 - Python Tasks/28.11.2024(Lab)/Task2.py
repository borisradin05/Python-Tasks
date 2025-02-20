import math

try:
    num = int(input("Enter an integer: "))
    print(f"The square root of {num} is {math.sqrt(num)}")
except ValueError:
    print('Invalid Number')
finally:
    print("Good Bye")