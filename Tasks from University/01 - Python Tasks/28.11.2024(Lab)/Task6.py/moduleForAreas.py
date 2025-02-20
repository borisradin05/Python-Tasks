def area_of_triangle(base, height):
    return 0.5 * base * height

def print_area_of_triangle(base, height):
    area = area_of_triangle(base, height)
    print(f"Area of triangle: {area}")

def area_of_square(side):
    return side * side

def print_area_of_square(side):
    area = area_of_square(side)
    print(f"Area of square: {area}")

def area_of_rectangle(length, width):
    return length * width

def print_area_of_rectangle(length, width):
    area = area_of_rectangle(length, width)
    print(f"Area of rectangle: {area}")

def area_of_rhombus(diagonal1, diagonal2):
    return 0.5 * diagonal1 * diagonal2

def print_area_of_rhombus(diagonal1, diagonal2):
    area = area_of_rhombus(diagonal1, diagonal2)
    print(f"Area of rhombus: {area}")

def area_of_trapezoid(base1, base2, height):
    return 0.5 * (base1 + base2) * height

def print_area_of_trapezoid(base1, base2, height):
    area = area_of_trapezoid(base1, base2, height)
    print(f"Area of trapezoid: {area}")
