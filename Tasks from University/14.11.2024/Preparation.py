
# example 1

# class Car:
#     def __init__(self, color):
#         self.color = color

#     def print_car(self):
#         print(f"Car color is {self.color}")

#     def get_color(self):
#         return self.color

#     def set_color(self, color):
#         self.color = color
# car1 = Car("yellow")
# car1.print_car()
# print(car1.get_color())
# car1.set_color("black")
# print(car1.get_color())
# car1.print_car()
# car1.set_color("green")
# car1.print_car()

################################################################
# example 2

# class Person:
#     def __init__(self, name, age):
#         self.name = name
#         self.age = age
#     def greetings(self):
#         print(f"Hello, my name is {self.name}")

# myPerson = Person("Ivan", 35)
# myPerson.greetings()
# myPerson.name = "Boris"
# myPerson.greetings()
# del myPerson.name
# del myPerson

################################################################
# example 3

# class Person:
# pass

################################################################
# example 4 - Inheritance

# class Person:
#     def __init__(self, fname, lname):
#         self.firstname = fname
#         self.lastname = lname
#     def printname(self):
#         print(self.firstname, self.lastname)
#     def __str__(self):
#         return f"{self.firstname} {self.lastname}"
# myPerson = Person("Ivan", "Petrov")
# myPerson.printname()

# class Student(Person):
#     def __init__(self, fname, lname, year):
#         super().__init__(fname, lname)
#         self.graduationyear = year
#     def welcome(self):
#         print("Welcome", self.firstname, self.lastname, "to the class of", self.graduationyear)
# person1 = Person("polina", "koleva")
# print(person1)


