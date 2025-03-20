#include <stdio.h>

void rotateArray(int arr[], int n, int k) 
{
    int temp[n];
    k = k % n;

    for (int i = 0; i < n; i++) 
    {
        temp[(i + k) % n] = arr[i];
    }

    for (int i = 0; i < n; i++) 
    {
        arr[i] = temp[i];
    }
}

int main() 
{
    int n, k;

    printf("Въведете броя на елементите в масива (N): ");
    scanf("%d", &n);

    int arr[n];

    printf("Въведете %d цели числа:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Въведете броя на позициите за завъртане (K): ");
    scanf("%d", &k);

    rotateArray(arr, n, k);

    printf("Завъртеният масив:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}