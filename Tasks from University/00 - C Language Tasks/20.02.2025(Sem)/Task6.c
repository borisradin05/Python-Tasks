#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Въведете температура в Целзий: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Целзий %.2f Фаренхайт\n", celsius, fahrenheit);

    return 0;
}
