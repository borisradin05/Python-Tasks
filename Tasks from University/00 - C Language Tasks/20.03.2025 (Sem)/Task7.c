#include <stdio.h>

/*
Примерен масив : 4, 3, 1, 4, 2, 5, 8  и число 11, 
Изход: 4, 2, 5
*/
void findSequenceWithSum(int arr[], int size, int targetSum) 
{
    for (int i = 0; i < size; i++) 
    {
        int sum = 0;
        for (int j = i; j < size; j++) 
        {
            sum += arr[j];
            if (sum == targetSum) {
                printf("Намерена последователност: ");
                for (int i = i; i <= j; i++) 
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                return;
            }
        }
    }
    printf("Не е намерена последователност с дадената сума.\n");
}

int main() 
{
    int n;
    int targetSum;

    printf("Въведете размера на масива: ");
    scanf("%d", &n);

    int arr[n];
    printf("Въведете елементите на масива:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Въведете целевата сума: ");
    scanf("%d", &targetSum);

    findSequenceWithSum(arr, n, targetSum);

    return 0;
}