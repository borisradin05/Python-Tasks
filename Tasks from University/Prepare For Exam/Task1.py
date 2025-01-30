import random

def FindSumNotEvenIndexes(list):
    sum = 0
    for i in range(len(list)):
        if list[i] % 2 != 0:
            sum += list[i]

    return sum

def CountEvenNumbers(list):
    count = 0
    for i in range(len(list)):
        if list[i] % 2 == 0:
            count += 1

    return count

def MultiplicationOfNegEvenNumbers(list):
    result = 1
    for i in range(len(list)):
        if list[i] < 0 and list[i] % 2 == 0:
            result *= list[i]

    return result

def DiffBetweenMaxAndMin(list):
    max = max(list)
    min = min(list)
    diff = max - min
    return diff

def PrintOddNumbersAndCount(list):
    count = 0
    for i in range(len(list)):
        if list[i] % 2 != 0:
            print(list[i])
            count += 1

    print(count)

def DeleteMinElement(list):
    min = min(list)
    list.remove(min)




try:
    n = int(input())
    if n < 20 or n > 30:
        raise ValueError("Number is not within the range 20 to 30.")
except ValueError as e:
    print(f"Error: {e}")
except Exception as e:
    print(f"Error: {e}")

list = list(range(n))

for i in range(n):
    list[i] = random.randint(-100, 100)

print(FindSumNotEvenIndexes(list))
print(CountEvenNumbers(list))

list2 = list()
for i in range(n):
    if list[i] > n:
        list2.append(list[i])

print(DiffBetweenMaxAndMin(list2))
PrintOddNumbersAndCount(list2)
list2 = DeleteMinElement(list2)

