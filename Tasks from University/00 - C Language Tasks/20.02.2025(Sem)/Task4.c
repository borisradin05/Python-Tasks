#include <stdio.h>

int main() {
    int height, i, j, k;
    char symbol;

    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    printf("Enter the symbol to draw the triangle: ");
    scanf(" %c", &symbol);

    for (i = 1; i <= height; i++) {
        for (j = height; j > i; j--) {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}
