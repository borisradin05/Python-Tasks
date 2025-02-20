class Car:
    def __init__(self, car_brand, car_model, car_price, car_color, manufacture_year):
        self.car_brand = car_brand
        self.car_model = car_model
        self.car_price = car_price
        self.car_color = car_color
        self.manufacture_year = manufacture_year
    def display_info(self):
        print(f"Brand: {self.car_brand}\nModel: {self.car_model}\nPrice: {self.car_price}$\nColor: {self.car_color}\nManufacture Year: {self.manufacture_year}")


cars = list()
cars.append(Car("BMW", "X5", 50000, "Black", 2018))
cars.append(Car("Audi", "A4", 40000, "White", 2019))
cars.append(Car("Mercedes", "S500", 70000, "Black", 2020))
cars.append(Car("Toyota", "Corolla", 20000, "Red", 2017))
cars.append(Car("Ford", "Focus", 15000, "Blue", 2016))
cars.append(Car("Chevrolet", "Camaro", 60000, "Yellow", 2021))
cars.append(Car("Nissan", "GTR", 80000, "Black", 2022))

def sort_price(list):
    list.sort(key=lambda x: x.car_price, reverse=True)
    for i in range(len(list)):
        list[i].display_info()

def list_by_brand(list, brand):
    for i in range(len(list)):
        if list[i].car_brand == brand:
            list[i].display_info()

def search_color(list, color):
    for i in range(len(list)):
        if list[i].car_color == color:
            list.sort(key=lambda x: x.price, reverse=True)
    if list.count > 0:
        list[0].display_info()
    
def newest_car(list):
    newlist = list()
    for i in range(len(list)):
        if list[i].manufacture_year == 2022:
            newlist.append(list[i])
    return newlist









