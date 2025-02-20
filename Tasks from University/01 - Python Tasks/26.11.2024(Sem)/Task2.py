def CheckPerfectSum(n):
    if n < 2:
        return False
    divisors = [1]
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            divisors.append(i)
            if i != n // i:
                divisors.append(n // i)
    return sum(divisors) == n

print(CheckPerfectSum(28))
print(CheckPerfectSum(14)) 