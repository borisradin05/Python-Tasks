
class Square(Shape):
    def __init__(self, side):
        super().__init__("Square")
        self.side = side

    def area(self):
        return self.side * self.side


class Circle(Shape):
    def __init__(self, radius):
        super().__init__("Circle")
        self.radius = radius

    def area(self):
        return 3.14 * self.radius * self.radius


class Shape:
    def __init__(self, shapeWord):
        self.shapeWord = shapeWord

    def area(self):
        return 0


def CreateShape(shapeWord, dimension):
    if shapeWord.lower() == "circle":
        return Circle(dimension)
    elif shapeWord.lower() == "square":
        return Square(dimension)
    else:
        return Shape(shapeWord)