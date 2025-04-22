#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 30
#define OVERTIME_RATE 1.5
#define TAX_RATE 0.0365

typedef struct {
    int id;
    float hourly_rate;
    int hours_worked;
    float weekly_salary;
} Employee;

void addEmployee(const char *filename);
void calculateAndDisplaySalaries(const char *filename);
void displayMenu();

int main() {
    const char *filename = "employees.dat";
    int choice;

    do {
        displayMenu();
        printf("Изберете опция: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee(filename);
                break;
            case 2:
                calculateAndDisplaySalaries(filename);
                break;
            case 0:
                printf("Изход от програмата.\n");
                break;
            default:
                printf("Невалидна опция. Опитайте отново.\n");
        }
    } while (choice != 0);

    return 0;
}

void displayMenu() {
    printf("\n--- Меню ---\n");
    printf("1. Добавяне на нов сътрудник\n");
    printf("2. Изчисляване и извеждане на седмичните заплати\n");
    printf("0. Изход\n");
}

void addEmployee(const char *filename) {
    FILE *file = fopen(filename, "ab");
    if (!file) {
        perror("Грешка при отваряне на файла");
        return;
    }

    Employee emp;
    printf("Въведете идентификационен номер: ");
    scanf("%d", &emp.id);
    printf("Въведете почасово заплащане: ");
    scanf("%f", &emp.hourly_rate);
    printf("Въведете брой отработени часове за седмицата: ");
    scanf("%d", &emp.hours_worked);

    emp.weekly_salary = 0;

    fwrite(&emp, sizeof(Employee), 1, file);
    fclose(file);

    printf("Сътрудникът е добавен успешно.\n");
}

void calculateAndDisplaySalaries(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        perror("Грешка при отваряне на файла");
        return;
    }

    Employee emp;
    int count = 0;

    printf("\n--- Седмични заплати ---\n");
    while (fread(&emp, sizeof(Employee), 1, file)) {
        float regular_hours = emp.hours_worked > 40 ? 40 : emp.hours_worked;
        float overtime_hours = emp.hours_worked > 40 ? emp.hours_worked - 40 : 0;

        emp.weekly_salary = (regular_hours * emp.hourly_rate) +
                            (overtime_hours * emp.hourly_rate * OVERTIME_RATE);
        emp.weekly_salary -= emp.weekly_salary * TAX_RATE;

        printf("ID: %d, Седмична заплата: %.2f лв.\n", emp.id, emp.weekly_salary);
        count++;
    }

    if (count == 0) {
        printf("Няма записи във файла.\n");
    }

    fclose(file);
}