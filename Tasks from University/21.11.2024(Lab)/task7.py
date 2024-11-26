students = (
    ("Ivan", 20, 6, "Plovdiv"),
    ("Andrei", 21, 5, "Sofiq"),
    ("Moisei", 3, None, "Burgas"),
    ("Boris", 23, 3, "Pazardzhik"),
    ("Mitko", 20, 6, "Varna"),
    ("Gosheto", 21, None, "Dupnica"),
    ("Sashka", 22, 3, "Karibite")
)

def good_students(students):
    total_grade = 0
    count = 0
    student_names = []

    for student in students:
        name = student[0]
        age = student[1]
        grade = student[2]
        city = student[3]
        if grade != None:
            total_grade += grade
            count += 1
            student_names.append(name)

    if count > 0:
        average_grade = total_grade / count
        student_names_str = ", ".join(student_names)
        print(f"Students {student_names_str} are making good progress this year. {average_grade:.2f}")
    else:
        print("No students with grades available.")


good_students(students)