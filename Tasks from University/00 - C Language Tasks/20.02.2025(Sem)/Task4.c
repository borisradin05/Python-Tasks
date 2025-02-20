#include <stdio.h>

int main() {
    int height, i, j, k;
    char symbol;

    printf("Въведете височината на триъгълника: ");
    scanf("%d", &height);

    printf("Въведете символа за рисуване на триъгълника: ");
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
