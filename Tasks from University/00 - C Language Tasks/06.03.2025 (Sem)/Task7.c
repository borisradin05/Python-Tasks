#include <stdio.h>

int main() 
{
    int n;
    char period;

    scanf("%d", &n);
    scanf("%s", period);

    double taxi_price, bus_price, train_price;

    if (period== "D")
    {
        taxi_price = 0.70 + 0.79 * n;
    } 
    else 
    {
        taxi_price = 0.70 + 0.90 * n;
    }

    if (n >= 20) 
    {
        bus_price = 0.09 * n;
    } 
    else 
    {
        bus_price = 1e9;
    }

    if (n >= 100) 
    {
        train_price = 0.06 * n;
    } 
    else 
    {
        train_price = 1e9;
    }

    double min_price = taxi_price;

    if (bus_price < min_price) 
    {
        min_price = bus_price;
    }

    if (train_price < min_price) 
    {
        min_price = train_price;
    }

    printf("%.2f\n", min_price);

    return 0;
}