#include <stdio.h>

#define ROWS 4
#define COLS 4

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d", &rows);

    cols = rows; 
    int arr[rows][cols];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int diag[rows * 2];
    int k = 0;

    for (int i = 0; i < rows; i++) 
    {
        if (i < cols) 
        {
            if (arr[i][i] > 10) 
            {
                diag[k++] = arr[i][i];
            }
            int j = cols - 1 - i;

            if (arr[i][j] > 10) {
                diag[k++] = arr[i][j];
            }
        }
    }

    printf("Elements from 2 diagonals that are larger than 10:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", diag[i]);
    }
    printf("\n");

    return 0;
}