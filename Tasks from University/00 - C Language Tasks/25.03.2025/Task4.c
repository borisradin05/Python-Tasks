#include <stdio.h>

int main() 
{
    int arr[20];
    int n, i = 0;
    int currentCount = 1;
    int maxCount = 1; 
    int maxElement = 0;
    int startIndex = 0;

    printf("Въведи броя на числата (максимум 20): ");
    scanf("%d", &n);

    printf("Въведи %d числа:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < n; i++) 
    {
        if (arr[i] == arr[i - 1]) 
        {
            currentCount++;
            if (currentCount > maxCount) 
            {
                maxCount = currentCount;
                maxElement = arr[i];
                startIndex = i - maxCount + 1;
            }
        } 
        else 
        {
            currentCount = 1;
        }
    }

    printf("Най-дълга редица: {");
    for (i = 0; i < maxCount; i++) 
    {
        printf("%d", maxElement);
        if (i < maxCount - 1) 
        {
            printf(", ");
        }
    }
    printf("}\n");

    return 0;
}