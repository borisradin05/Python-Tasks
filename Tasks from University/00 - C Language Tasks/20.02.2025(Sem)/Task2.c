#include <stdio.h>

int main() {
    int stars = 55;
    int row = 1;
    int count = 0;

    while (count < stars) {
        for (int i = 0; i < row; i++) {
            if (count < stars) {
                printf("*");
                count++;
            }
        }
        printf("\n");
        row++;
    }

    return 0;
}