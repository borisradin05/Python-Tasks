def NOK(a, b):
    while b != 0:
        c = b
        b = a % b
        a = c
    return a

a = int(input())
b = int(input())
print(NOK(a, b))
