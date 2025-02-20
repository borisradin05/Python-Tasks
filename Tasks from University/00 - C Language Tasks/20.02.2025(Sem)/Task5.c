#include <stdio.h>

int main() {
    float inches, millimeters, centimeters, decimeters, meters;

    printf("Welcome to the Inches Converter!\n");
    printf("Please enter the length in inches: ");
    scanf("%f", &inches);

    millimeters = inches * 25.4;
    centimeters = inches * 2.54;
    decimeters = inches * 0.254;
    meters = inches * 0.0254;

    printf("\n%.2f inches is equal to:\n", inches);
    printf("%.2f millimeters\n", millimeters);
    printf("%.2f centimeters\n", centimeters);
    printf("%.2f decimeters\n", decimeters);
    printf("%.2f meters\n", meters);

    return 0;
}
