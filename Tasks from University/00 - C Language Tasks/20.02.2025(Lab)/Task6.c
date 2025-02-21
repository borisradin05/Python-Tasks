#include <stdio.h>

int main() {
    int number;
    int sum;

    scanf("%d", &number);

    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int units = number % 10;
    sum = hundreds + tens + units;

    printf("%d", sum);

    return 0;
}