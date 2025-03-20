#include <stdio.h>

void findLongestSubsequence(int arr[], int n) 
{
    int maxLength = 1, currentLength = 1;
    int startIndex = 0, maxStartIndex = 0;
    int isIncreasing = 0;

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > arr[i - 1]) 
        {
            if (isIncreasing != 1) 
            {
                isIncreasing = 1;
                currentLength = 2;
                startIndex = i - 1;
            } 
            else 
            {
                currentLength++;
            }
        } else if (arr[i] < arr[i - 1]) 
        {
            if (isIncreasing != -1)
             {
                isIncreasing = -1;
                currentLength = 2;
                startIndex = i - 1;
            } 
            else 
            {
                currentLength++;
            }
        }
        else 
        {
            isIncreasing = 0;
            currentLength = 1;
        }

        if (currentLength > maxLength)
        {
            maxLength = currentLength;
            maxStartIndex = startIndex;
        }
    }

    printf("Най-дългата подредица: ");
    for (int i = maxStartIndex; i < maxStartIndex + maxLength; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int n;
    printf("Въведете броя на елементите: ");
    scanf("%d", &n);

    int arr[n];
    printf("Въведете елементите на масива:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    findLongestSubsequence(arr, n);

    return 0;
}