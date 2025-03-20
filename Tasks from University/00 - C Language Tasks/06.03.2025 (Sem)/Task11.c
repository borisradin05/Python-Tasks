#include <stdio.h>

int main() 
{
    int n;

    scanf("%d", &n);
    //gorna chast
    printf("/");
    for(int i=0; i<n/2;i++)
    {
        printf("^");
    }
    printf("\\");
    for(int i=0; i<(n-n/2-2)*2;i++)
    {
        printf("_");
    }
    printf("/");
    for(int i=0; i<n/2;i++)
    {
        printf("^");
    }
    printf("\\\n");

    //mid chast
    for(int i=0; i<n-2;i++)
    {
        printf("|");
        for(int i=0; i<2*n-2;i++)
        {
            printf(" ");
        }
        printf("|\n");
    }
    //dolna chast
    printf("\\");
    for(int i=0; i<n/2;i++)
    {
        printf("_");
    }
    printf("/");
    for(int i=0; i<(n-n/2-2)*2;i++)
    {
        printf(" ");
    }
    printf("\\");
    for(int i=0; i<n/2;i++)
    {
        printf("_");
    }
    printf("/");

}