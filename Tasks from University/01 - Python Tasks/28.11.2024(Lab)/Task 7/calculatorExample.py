import Calculator

input_values = input().split()
result_add = Calculator.sum(int(input_values[0]), int(input_values[1]))
print(f"{result_add}")

input_values = input().split()
result_subtract = Calculator.subtract(int(input_values[0]), int(input_values[1]))
print(f"{result_subtract}")

input_values = input().split()
result_multiply = Calculator.multiply(int(input_values[0]), int(input_values[1]))
print(f"{result_multiply}")

input_values = input().split()
result_divide = Calculator.devide(int(input_values[0]), int(input_values[1]))
print(f"{result_divide}")