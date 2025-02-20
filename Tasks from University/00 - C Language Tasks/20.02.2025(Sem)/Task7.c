#include <stdio.h>
#include <math.h>

#define PI 3.14159265

double degreesToRadians(double degrees) {
    return degrees * (PI / 180.0);
}

int main() {
    double degrees;
    printf("Enter degrees: ");
    scanf("%lf", &degrees);

    double radians = degreesToRadians(degrees);
    printf("%.2f degrees is equal to %.2f radians\n", degrees, radians);

    return 0;
}