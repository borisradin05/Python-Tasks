def CheckOriginalPrime(num):
    if num == 1:
        return False
    for i in range(2, num):
        if num % i == 0:
            return False
    return True

def CheckPrime(num):
    for i in range(2, num):
        if CheckOriginalPrime(i) and CheckOriginalPrime(num - i):
            return True
    return False