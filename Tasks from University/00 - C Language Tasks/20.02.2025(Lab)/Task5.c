#include <stdio.h>

int main() {
    int number, digit1, digit2, digit3, digit4, digit5;

    printf("Вкарай числото: ");
    scanf("%d", &number);

    digit1 = number / 10000; // 12345 / 10000 = 1
    digit2 = (number / 1000) % 10; // 12345 / 1000 = 12 % 10 = 2
    digit3 = (number / 100) % 10; // 12345 / 100 = 123 % 10 = 3
    digit4 = (number / 10) % 10; // 12345 / 10 = 1234 % 10 = 4
    digit5 = number % 10; // 12345 % 10 = 5

    printf("Цифри: %d десеткихиляди %d хиляди %d стотици %d десетици %d единици\n", digit1, digit2, digit3, digit4, digit5);

    return 0;
}