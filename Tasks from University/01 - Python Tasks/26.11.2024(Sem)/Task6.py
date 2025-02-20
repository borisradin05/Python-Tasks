def findValuesOfNumbers(numbers):
    if len(numbers) == 0:
        return [0,0,0]
    average = sum(numbers) / len(numbers)
    minimum = min(numbers)
    maximum = max(numbers)
    return [average, minimum, maximum]

numbers = input().split()
print(findValuesOfNumbers(numbers))
