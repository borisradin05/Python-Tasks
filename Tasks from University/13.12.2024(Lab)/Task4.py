def ZeroHighValues(list, number):
    for i in range(len(list)):
        if float(list[i]) > number:
            list[i] = 0

    return list

print('Числата с интервал')
numbersText = input()
numbersList = numbersText.split()
print('Число за проверка')
number = int(input())
print(ZeroHighValues(numbersList, number)) 