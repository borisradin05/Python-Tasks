class ClassList:
    def __init__(self, numbers):
        self.numbers = []
        for num in numbers:
            if isinstance(num, (int, float)):
                self.numbers.append(num)

    def PrintNumbers(self):
        print(self.numbers)

    def CalculateAverage(self):
        if len(self.numbers) == 0:
            return 0
        return sum(self.numbers) / len(self.numbers)
    

