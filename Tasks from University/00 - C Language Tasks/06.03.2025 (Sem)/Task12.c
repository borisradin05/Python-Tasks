#include <stdio.h>

void draw_butterfly(int n) 
{
    int width = 2 * n - 1;
    int height = 2 * (n - 2) + 1;
    int wings = n - 1;

    //top
    for (int i = 0; i < wings; i++) 
    {
        for (int j = 0; j < wings; j++) 
        {
            printf(i % 2 == 0 ? "*" : "-");
        }
        printf("\\ /");
        for (int j = 0; j < wings; j++) 
        {
            printf(i % 2 == 0 ? "*" : "-");
        }
        printf("\n");
    }

    //mid
    for (int i = 0; i < width / 2 +1; i++) printf(" ");
    printf("@\n");

    //bottom
    for (int i = wings - 1; i >= 0; i--) 
    {
        for (int j = 0; j < wings; j++) 
        {
            printf(i % 2 == 0 ? "*" : "-");
        }
        printf("/ \\");
        for (int j = 0; j < wings; j++) 
        {
            printf(i % 2 == 0 ? "*" : "-");
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    draw_butterfly(n);


    return 0;
}