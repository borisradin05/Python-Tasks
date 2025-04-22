#include <stdio.h>
#include <string.h>
#include <math.h>

#define CHAIR_PRICE 13.99
#define TABLE_PRICE 42.00
#define CUPS_PRICE 5.98
#define DISHES_PRICE 21.02

int main() 
{
    int guests, chairs = 0, tables = 0, cups = 0, dishes = 0;
    char item[20];
    double totalSpent = 0.0;

    printf("Въведете броя на гостите: ");
    scanf("%d", &guests);

    printf("Въведете закупените предмети (напишете PARTY! за край):\n");
    while (1) 
    {
        scanf("%s", item);
        if (strcmp(item, "PARTY!") == 0) 
        {
            break;
        }

        if (strcmp(item, "Chair") == 0) 
        {
            chairs++;
            totalSpent += CHAIR_PRICE;
        } 
        else if (strcmp(item, "Table") == 0) 
        {
            tables++;
            totalSpent += TABLE_PRICE;
        } 
        else if (strcmp(item, "Cups") == 0) 
        {
            cups += 6;
            totalSpent += CUPS_PRICE;
        } 
        else if (strcmp(item, "Dishes") == 0) 
        {
            dishes += 6;
            totalSpent += DISHES_PRICE;
        }
    }

    int requiredTables = ceil(guests / 8.0);
    int requiredChairs = guests;
    int requiredCups = guests;
    int requiredDishes = guests;

    int additionalTables = requiredTables - tables;
    int additionalChairs = requiredChairs - chairs;
    int additionalCups = ceil((requiredCups - cups) / 6.0);
    int additionalDishes = ceil((requiredDishes - dishes) / 6.0);

    printf("%.2f\n", totalSpent);
    if (additionalTables > 0) 
    {
        printf("%d Маси\n", additionalTables);
    }
    if (additionalChairs > 0) 
    {
        printf("%d Стол(а)\n", additionalChairs);
    }
    if (additionalCups > 0) 
    {
        printf("%d Комплект(а) чаши\n", additionalCups);
    }
    if (additionalDishes > 0) 
    {
        printf("%d Комплект(а) чинии\n", additionalDishes);
    }

    return 0;
}
