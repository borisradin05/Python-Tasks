import moduleForAreas

input_data = input()
triangle_area = moduleForAreas.area_of_triangle(int(input_data[0]), int(input_data[1]))
input_data = input()
square_area = moduleForAreas.area_of_trapezoid(int(input_data[0]), int(input_data[1]), int(input_data[2]))
input_data = input()
rectangle_area = moduleForAreas.area_of_rhombus(int(input_data[0]), int(input_data[1]))

moduleForAreas.print_area_of_triangle(int(input_data[0]), int(input_data[1]))
moduleForAreas.print_area_of_trapezoid(int(input_data[0]), int(input_data[1]), int(input_data[2]))
moduleForAreas.print_area_of_rhombus(int(input_data[0]), int(input_data[1]))