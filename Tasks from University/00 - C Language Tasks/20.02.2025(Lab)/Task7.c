#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    double d1, d2, area;

    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("Enter the coordinates of the third point (x3, y3): ");
    scanf("%lf %lf", &x3, &y3);
    printf("Enter the coordinates of the fourth point (x4, y4): ");
    scanf("%lf %lf", &x4, &y4);

    d1 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    d2 = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));

    area = (d1 * d2) / 2;

    printf("The area of the rhombus is: %.2lf\n", area);

    return 0;
}