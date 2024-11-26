# 4
class Number:
    def __init__(self, number):
        self.number = number
    def __str__(self):
        return(f"Number is {self.number}")
    def power2(self):
        print(f"Number to the power of 2 is {self.number**2}")
    def power3(self):
        print(f"Number to the power of 3 is {self.number**3}")
number1 = Number(5)
print(number1)
number1.power2()
print(number1)
number1.power3()
print(number1)

# 5
class Arithmetic:
    def __init__(self, number1, number2):
        self.number1 = number1
        self.number2 = number2
    def __str__(self):
        return(f"Numbers are {self.number1} and {self.number2}")
    def sum(self):
        print(f"Sum of numbers is {self.number1 + self.number2}")
    def difference(self):
        print(f"Difference of numbers is {self.number1 - self.number2}")
    def multiply(self):
        print(f"Multiplication of numbers is {self.number1 * self.number2}")
    def divide(self):
        if self.number2 == 0:
            print("Cannot divide on 0")
        else:
            print(f"Division of numbers is {self.number1 / self.number2:.2f}")
arithmetic1 = Arithmetic(5, 3)
print(arithmetic1)
arithmetic1.sum()
arithmetic1.difference()
arithmetic1.multiply()
arithmetic1.divide()

