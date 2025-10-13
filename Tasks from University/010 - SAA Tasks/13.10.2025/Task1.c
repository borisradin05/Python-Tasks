//Даден е едномерен масив от цели числа с N елемента. Да се чете от конзолата. Да се създаде втори едномерен масив със следните елементи:
// Има за първи елемент - максималния по стойност елемент от първия масив.
// Последният елемент на втория е броя на нечетните елементи от първия масив.
// Останалите елементи на втория масив са отрицателните елементи на първия масив по стойност.

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = INT_MIN;
    int oddCount = 0;
    int negativeCount = 0;

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
        if (arr[i] % 2 != 0) 
        {
            oddCount++;
        }
        if (arr[i] < 0) 
        {
            negativeCount++;
        }
    }

    int newSize = 2 + negativeCount;
    int *newArr = (int *)malloc(newSize * sizeof(int));

    newArr[0] = max;
    newArr[newSize - 1] = oddCount;

    int index = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            newArr[index++] = arr[i];
        }
    }

    printf("New array: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", newArr[i]);
    }
    printf("\n");

    free(newArr);
    return 0;
}