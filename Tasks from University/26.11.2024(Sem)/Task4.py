def decimalToBinary(number):
    if number == 0:
        return "0"
    
    binary = ""

    while number > 0:
        binary = str(number % 2) + binary
        number = number // 2
    return binary

num = 10
binaryNum = decimalToBinary(num)
print(f"The binary representation of {num} is {binaryNum}")