#include <stdio.h>

#define PI 3.14159265

double degreesToRadians(double degrees) {
    return degrees * (PI / 180.0);
}

int main() {
    double degrees;
    printf("Въведете градуси: ");
    scanf("%lf", &degrees);

    double radians = degreesToRadians(degrees);
    printf("%.2f градуси е равно на %.2f радиани\n", degrees, radians);

    return 0;
}