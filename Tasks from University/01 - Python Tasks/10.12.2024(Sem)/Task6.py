class TriangleChecker:
    def __init__(self, a, b, c):
        self.sides = [a, b, c]

    def is_triangle(self):
        for side in self.sides:
            if not isinstance(side, (int, float)):
                return "Трябва да въведете само числа!"
            
        for side in self.sides:
            if side <= 0:
                return "Нищо не може да работи с отрицателни числа!"
            
        if (self.sides[0] + self.sides[1] > self.sides[2]) and (self.sides[1] + self.sides[2] > self.sides[0]) and (self.sides[0] + self.sides[2] > self.sides[1]):
            return "Да, можете да създадете триъгълник!"
        else:
            return "Жалко, но не можете да наприве тръгълник от това!"
        
a = TriangleChecker(3,4,5)

output = a.is_triangle()
print(output)
