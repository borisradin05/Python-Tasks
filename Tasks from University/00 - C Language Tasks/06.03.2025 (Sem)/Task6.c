#include <stdio.h>

int is_inside(int a, int b, int c)
{
    if(c<=a, c>=b)
    {
        return 1;
    }
    return 0;
}

int main() 
{
    int x1, y1, x2, y2, x, y;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x, &y);

    if (is_inside(x1, x2, x)==1 && is_inside(y1, y2, y)==1) 
    {
        printf("Inside\n");
    } 
    else 
    {
        printf("Outside\n");
    }

    return 0;
}