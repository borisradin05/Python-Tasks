#include <stdio.h>

void sortDescending(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] < arr[j]) 
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() 
{
    int n, k;

    printf("Въведете броя на елементите (N): ");
    scanf("%d", &n);

    int arr[n];
    printf("Въведете %d цели числа:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Въведете стойността на K: ");
    scanf("%d", &k);

    if (k > 0 && k <= n) 
    {
        sortDescending(arr, n);
        printf("%d-тият най-голям елемент е: %d\n", k, arr[k - 1]);
    } 
    else 
    {
        printf("Невалидна стойност за K. Трябва да бъде между 1 и %d.\n", n);
    }

    return 0;
}