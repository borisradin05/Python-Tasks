def transformBinaryToDecimal(binary_str):
    decimal_number = 0
    for digit in binary_str:
        decimal_number = decimal_number * 2 + int(digit)
    return decimal_number

decimal_number = transformBinaryToDecimal(input())
print(decimal_number)  #