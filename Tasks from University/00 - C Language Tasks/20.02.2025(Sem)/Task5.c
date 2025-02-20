#include <stdio.h>

int main() {
    float inches, millimeters, centimeters, decimeters, meters;

    printf("Въведете дължина в инчове: ");
    scanf("%f", &inches);

    millimeters = inches * 25.4;
    centimeters = inches * 2.54;
    decimeters = inches * 0.254;
    meters = inches * 0.0254;

    printf("\n%.2f Инча е равно на:\n", inches);
    printf("%.2f милиметра\n", millimeters);
    printf("%.2f сантиметра\n", centimeters);
    printf("%.2f дециметра\n", decimeters);
    printf("%.2f метра\n", meters);

    return 0;
}
