class Vehicle:
    def __init__(self, wheels, model, color):
        self.wheels = wheels
        self.model = model
        self.color = color

    def insert_data(self, wheels, model, color):
        self.wheels = wheels
        self.model = model
        self.color = color

    def set_wheels(self, wheels):
        self.wheels = wheels

    def set_model(self, model):
        self.model = model

    def set_color(self, color):
        self.color = color

    def print(self):
        print(f"Model: {self.model}, Color: {self.color}, Wheels: {self.wheels}")

class LuxCar(Vehicle):
    def __init__(self, wheels, model, color, passengers):
        super().__init__(wheels, model, color)
        self.passengers = passengers

    def set_passengers(self, passengers):
        self.passengers = passengers

    def print(self):
        super().print()
        print(f"Passengers: {self.passengers}")

class SportsCar(Vehicle):
    def __init__(self, wheels, model, color, loadlimit):
        super().__init__(wheels, model, color)
        self.loadlimit = loadlimit

    def set_loadlimit(self, loadlimit):
        self.loadlimit = loadlimit

    def print(self):
        super().print()
        print(f"Load limit: {self.loadlimit}")

vehicle = Vehicle(4, "Sedan", "Red")
vehicle.print()
lux_car = LuxCar(4, "Limousine", "Black", 5)
lux_car.print()
sports_car = SportsCar(4, "Coupe", "Blue", 500)
sports_car.print()

   