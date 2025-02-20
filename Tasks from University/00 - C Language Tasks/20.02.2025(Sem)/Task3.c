#include <stdio.h>

int main() {
    char symbol;
    printf("Въведете символ: ");
    scanf(" %c", &symbol);

    int width = 10;
    int height = 5;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                printf("%c", symbol);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}