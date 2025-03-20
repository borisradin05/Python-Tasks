#include <stdio.h>

int main() 
{
    int n, num;
    int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &num);

        if (num < 200) p1++;
        else if (num >= 200 && num <= 399) p2++;
        else if (num >= 400 && num <= 599) p3++;
        else if (num >= 600 && num <= 799) p4++;
        else p5++;
    }

    printf("p1: %.2f%%\n", (p1 * 100.0) / n);
    printf("p2: %.2f%%\n", (p2 * 100.0) / n);
    printf("p3: %.2f%%\n", (p3 * 100.0) / n);
    printf("p4: %.2f%%\n", (p4 * 100.0) / n);
    printf("p5: %.2f%%\n", (p5 * 100.0) / n);

    return 0;
}