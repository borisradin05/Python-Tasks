#include <stdio.h>

int main() {
    int arr[] = {2, 1, 1, 2, 3, 3, 2, 2, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxCount = 0, currentCount = 1;
    int maxElement = arr[0];

    for (int i = 0; i < size - 1; i++) 
    {
        if (arr[i] == arr[i + 1]) 
        {
            currentCount++;
        } 
        else 
        {
            if (currentCount > maxCount) 
            {
                maxCount = currentCount;
                maxElement = arr[i];
            }
            currentCount = 1;
        }
    }

    if (currentCount > maxCount) {
        maxCount = currentCount;
        maxElement = arr[size - 1];
    }

    printf("Най-дългата последователност от еднакви елементи: ");
    for (int i = 0; i < maxCount; i++) 
    {
        printf("%d ", maxElement);
    }
    printf("\n");

    return 0;
}