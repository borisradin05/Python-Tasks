#include <stdio.h>
#include <string.h>

#define max_Students 30
#define max_Classes 5

typedef struct 
{
    char name[50];
    float grade;
} Student;

typedef struct 
{
    Student students[max_Students];
    int studentCount;
} Class;

typedef struct 
{
    Class classes[max_Classes];
    int classCount;
} Vipusk;

void inputStudents(Class *class) 
{
    printf("Колко ученици има в класа: ");
    scanf("%d", &class->studentCount);

    for (int i = 0; i < class->studentCount; i++) 
    {
        printf("Име на студент %d: ", i + 1);
        scanf("%s", class->students[i].name);
        printf("Оценка %d: ", i + 1);
        scanf("%f", &class->students[i].grade);
    }
}

float calculateClassAverage(Class *class) 
{
    float total = 0;
    for (int i = 0; i < class->studentCount; i++) 
    {
        total += class->students[i].grade;
    }
    return total / class->studentCount;
}

float calculateVipuskAverage(Vipusk *Vipusk) 
{
    float total = 0;
    int totalStudents = 0;

    for (int i = 0; i < Vipusk->classCount; i++) 
    {
        for (int j = 0; j < Vipusk->classes[i].studentCount; j++) 
        {
            total += Vipusk->classes[i].students[j].grade;
            totalStudents++;
        }
    }

    return total / totalStudents;
}

int main() {
    Vipusk yearGroup;

    printf("Колко класа има във випуска: ");
    scanf("%d", &yearGroup.classCount);

    for (int i = 0; i < yearGroup.classCount; i++) 
    {
        printf("Въвеждане на данни за клас %d:\n", i + 1);
        inputStudents(&yearGroup.classes[i]);
    }

    for (int i = 0; i < yearGroup.classCount; i++) 
    {
        float classAverage = calculateClassAverage(&yearGroup.classes[i]);
        printf("Среден бал на клас %d: %.2f\n", i + 1, classAverage);
    }

    float yearGroupAverage = calculateVipuskAverage(&yearGroup);
    printf("Среден бал на випуска: %.2f\n", yearGroupAverage);

    return 0;
}