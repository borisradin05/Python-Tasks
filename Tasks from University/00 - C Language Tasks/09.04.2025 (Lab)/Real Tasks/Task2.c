#include <stdio.h>
#include <string.h>

typedef struct 
{
    char brand[50];
    char model[50];
    int year;
    double maxSpeed;
} Vehicle;

typedef struct 
{
    Vehicle car;
    Vehicle motorcycle;
    Vehicle boat;
    Vehicle airplane;
} VehicleTypes;

void compareMaxSpeed(Vehicle v1, Vehicle v2) 
{
    if (v1.maxSpeed > v2.maxSpeed) 
    {
        printf("%s %s е по-бърз(а) от %s %s.\n", v1.brand, v1.model, v2.brand, v2.model);
    } 
    else if (v1.maxSpeed < v2.maxSpeed) 
    {
        printf("%s %s е по-бърз(а) от %s %s.\n", v2.brand, v2.model, v1.brand, v1.model);
    } 
    else 
    {
        printf("%s %s и %s %s имат еднаква максимална скорост.\n", v1.brand, v1.model, v2.brand, v2.model);
    }
}

int main() 
{
    VehicleTypes vehicles = 
    {
        .car = {"Кола", "1", 2020, 180.0},
        .motorcycle = {"Мотор", "2", 2021, 299.0},
        .boat = {"Лодка", "3", 2019, 65.0},
        .airplane = {"Самоед", "4", 2015, 900.0}
    };

    compareMaxSpeed(vehicles.car, vehicles.motorcycle);
    compareMaxSpeed(vehicles.boat, vehicles.airplane);

    return 0;
}