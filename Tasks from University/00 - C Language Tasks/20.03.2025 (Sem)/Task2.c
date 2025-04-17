#include <stdio.h>

int main() 
{
    int n;
    printf("Въведете броя на елементите (N): ");
    scanf("%d", &n);

    int arr[n];
    printf("Въведете елементите на последователността:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int isValid = 1; 
    for (int i = 1; i < n; i++) 
    {
        if (i % 2 == 1) 
        {
            if (arr[i - 1] > arr[i]) 
            {
                isValid = 0;
                break;
            }
        } 
        else 
        {
            if (arr[i - 1] < arr[i]) 
            {
                isValid = 0;
                break;
            }
        }
    }

    if (isValid == 1) 
    {
        printf("Последователността отговаря на условието.\n"); 
    } 
    else 
    {
        printf("Последователността не отговаря на условието.\n"); 
    }

    return 0;
}