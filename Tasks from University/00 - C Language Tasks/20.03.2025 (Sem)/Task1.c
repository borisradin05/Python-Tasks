#include <stdio.h>

int main() 
{
    int N;
    printf("Въведи размер на масива (N): ");
    scanf("%d", &N);

    int arr[N];
    printf("Въведи %d елементи за сортинрания масив:\n", N);
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int maxLength = 1;
    int currentLength = 1;
    int startIndex = 0;
    int maxStartIndex = 0;

    for (int i = 1; i < N; i++)
    {
        if (arr[i] == arr[i - 1]) 
        {
            currentLength++;
        } 
        else
         {
            if (currentLength > maxLength) 
            {
                maxLength = currentLength;
                maxStartIndex = startIndex;
            }
            currentLength = 1;
            startIndex = i;
        }
    }

    if (currentLength > maxLength) 
    {
        maxLength = currentLength;
        maxStartIndex = startIndex;
    }

    printf("Най-голямата площадка от %d има дължина %d.\n", maxStartIndex, maxLength);

    return 0;
}