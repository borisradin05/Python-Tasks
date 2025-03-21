#include <stdio.h>

#define biggestSize 20

void printArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[biggestSize] = {0};
    int currentSize = 10;

    printf("Въведете 10 числа:\n");
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Начален масив:\n");
    printArray(arr, currentSize);

    while (currentSize < biggestSize) 
    {
        int number, position;

        printf("Въведете число и позиция (0 за край):\n");
        scanf("%d %d", &number, &position);

        if (number == 0)
        {
            break;
        }

        if (position < 0 || position > currentSize) 
        {
            printf("Невалидна позиция. Опитайте отново.\n");
            continue;
        }

        for (int i = currentSize; i > position; i--) 
        {
            arr[i] = arr[i - 1];
        }

        arr[position] = number;
        currentSize++;

        printf("Обновен масив:\n");
        printArray(arr, currentSize);
    }

    printf("Краен масив:\n");
    printArray(arr, currentSize);

    return 0;
}