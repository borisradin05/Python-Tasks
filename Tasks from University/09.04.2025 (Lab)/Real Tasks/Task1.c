#include <stdio.h>
#include <math.h>

typedef struct 
{
    double x;
    double y;
} Point;

// ( x 2 − x 1 ) ^ 2 + ( y 2 − y 1 ) ^ 2
double calculateDistance(Point a, Point b) 
{
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

int main() 
{
    Point points[] = 
    {
        {0.0, 0.0},
        {1.0, 0.0},
        {0.0, 1.0},
        {1.0, 1.0}
    };

    int numPoints = sizeof(points) / sizeof(points[0]);

    for (int i = 0; i < numPoints - 2; i++) 
    {
        Point a = points[i];
        Point b = points[i + 1];
        Point c = points[i + 2];

        double sideAB = calculateDistance(a, b);
        double sideBC = calculateDistance(b, c);
        double sideCA = calculateDistance(c, a);

        printf("Триъгълник %d:\n", i + 1);
        printf("Страна AB: %.2f\n", sideAB);
        printf("Страна BC: %.2f\n", sideBC);
        printf("Страна CA: %.2f\n", sideCA);
        printf("\n");
    }

    return 0;
}
