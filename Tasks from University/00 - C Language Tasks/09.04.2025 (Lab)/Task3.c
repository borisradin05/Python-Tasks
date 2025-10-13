#include <stdio.h>
#include <string.h>

typedef struct Person
{
    char name[50];
    int citNo;
    float salary;
} person;

int main()
{
    person p1, p2, p3;
    person *p = &p1;
    
    strcpy(p->name, "John Doe");
    p->citNo = 123456789;
    p->salary = 50000.0;

    printf("Name: %s\n", p->name);
    printf("Citizenship Number: %d\n", p->citNo);
    printf("Salary: %.2f\n", p->salary);

    return 0;
}