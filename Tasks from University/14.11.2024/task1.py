# 1
class Person:
    def __init__(self, name, family, age, nationality):
        self.name = name
        self.family = family
        self.age = age
        self.nationality = nationality
    def print(self):
        print(f"{self.name} {self.family} is {self.age} years old and is from {self.nationality}")
person1 = Person("Georgi", "Aleksandrov", 65, "Bulgaria")
print(person1)
person2 = Person("Aleksandar", "Stoimenov", 28, "Russia")
print(person2)

# 2
class Student(Person):
    def __init__(self, name, family, nationality, age, university, yearofstudy):
        super().__init__(name, family, nationality, age)
        self.university = university
        self.yearofstudy = yearofstudy
    def print(self):
        super().print()
        print(f"He studies at {self.university} and is in year {self.yearofstudy}")

student1 = Student("Ivan", "Petrov", 35, "Bulgaria", "Sofia University", 3)
print(student1)
student2 = Student("Boris", "Ivanov", 25, "Russia", "Moscow University", 1)
print(student2)

# 3
class Lecturer(Person):
    def __init__(self, name, family, nationality, age, university, experience):
        super().__init__(name, family, nationality, age)
        self.university = university
        self.experience = experience
    def print(self):
        super().print()
        print(f"He works at {self.university} and has {self.experience} years of experience")
lecturer1 = Lecturer("Stefan", "Dimitrov", 45, "Bulgaria", "Sofia University", 10)
print(lecturer1)
lecturer2 = Lecturer("Cvetelina", "Stoqnova", 25, "Russia", "Moscow University", 5)
print(lecturer2)