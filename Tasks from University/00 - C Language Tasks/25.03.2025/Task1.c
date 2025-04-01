#include <stdio.h>

int main() 
{
    int arr[20];

    for (int i = 0; i < 20; i++) 
    {
        arr[i] = i * 5;
    }

    printf("Елементи:\n");
    for (int i = 0; i < 20; i++) 
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}