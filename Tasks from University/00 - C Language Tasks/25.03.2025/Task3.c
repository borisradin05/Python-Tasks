#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int n;
    printf("Въведете колко прости числа да се изведат: ");
    scanf("%d", &n);

    int limit = n * n;
    bool isPrime[limit + 1];
    for (int i = 2; i <= limit; i++)
    {
         isPrime[i] = true;
    }

    for (int i = 2; i * i <= limit; i++) 
    {
        if (isPrime[i] == true) 
        {
            for (int j = i * i; j <= limit; j += i) 
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2, count = 0; count < n; i++) 
    {
        if (isPrime[i] == true) 
        {
            printf("%d ", i);
            count++;
        }
    }

    return 0;
}
