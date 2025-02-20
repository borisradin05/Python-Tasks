
input_numbers = input()

numbers_list = input_numbers.split()

numbers_float = []
for number in numbers_list:
    numbers_float.append(float(number))

absolute_values = list(map(lambda x: abs(x), numbers_float))

for num in absolute_values:
    print(num)