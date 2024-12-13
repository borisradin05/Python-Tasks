def add(a, b):
    return a + b

def subtract(a, b):
    return a - b

def multiply(a, b):
    return a * b

def divide(a, b):
    if b == 0:
        return "Деление на нула!"
    return a / b

def calculator():
    operation = input("Въведи операция (+, -, *, /): ")
    num1 = float(input("Първо число: "))
    num2 = float(input("Второ число: "))

    if operation == '+':
        print(f"{add(num1, num2)}")
    elif operation == '-':
        print(f"{subtract(num1, num2)}")
    elif operation == '*':
        print(f"{multiply(num1, num2)}")
    elif operation == '/':
        print(f"{divide(num1, num2)}")
    else:
        print("Невалидна операция")

calculator()
