class Building:
    def __init__(self, height, area, address):
        self.height = height
        self.area = area
        self.address = address

    def print(self):
        print(f"Building at {self.address} with height {self.height} meters and area {self.area} square meters.")

class House(Building):
    def __init__(self, height, area, address, number_of_floors, owner_name):
        super().__init__(height, area, address)
        self.number_of_floors = number_of_floors
        self.owner_name = owner_name

    def print(self):
        print(f"House owned by {self.owner_name} at {self.address} with height {self.height} meters, area {self.area} square meters, and {self.number_of_floors} floors.")

def find_house_with_biggest_area(houses):
    if houses.count == 0:
        return None
    biggest_house = houses[0]
    for house in houses[1:]:
        if house.area > biggest_house.area:
            biggest_house = house
    return biggest_house

house1 = House(10, 150.5, "123 Main St", 2, "Alice")
house2 = House(12, 200.0, "456 Elm St", 3, "Bob")
house3 = House(8, 180.75, "789 Oak St", 1, "Charlie")

houses = [house1, house2, house3]

for house in houses:
        house.print()
biggest_house = find_house_with_biggest_area(houses)
if biggest_house != None:
    print("\nHouse with the biggest area:")
    biggest_house.print()