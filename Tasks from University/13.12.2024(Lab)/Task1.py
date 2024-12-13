def AreaOfSquare(side):
    return side * side

def AreaOfRectangle(length, width):
    return length * width

def AreaOfTriangle(base, height):
    return 0.5 * base * height

print("Изберете фигура")
print("1. Квадрат")
print("2. Правоъгълник")
print("3. Триъгълник")

choice = int(input())

if choice == 1:
    side = float(input())
    print(f"Лицето на квадрата: {AreaOfSquare(side)}")
elif choice == 2:
    length = float(input())
    width = float(input())
    print(f"Лицето на правоъгълника: {AreaOfRectangle(length, width)}")
elif choice == 3:
    base = float(input())
    height = float(input())
    print(f"Лицето на триъгълника: {AreaOfTriangle(base, height)}")
else:
    print('Няма фигура с този номер.')
