#include <stdio.h>

int get_max(int a, int b) 
{
    return (a > b) ? a : b;
}

int get_min(int a, int b) 
{
    return (a < b) ? a : b;
}

int main() 
{
    int num;
    int max_num = -2147483648;
    int min_num = 2147483647;

    printf("Въведете числа (0 за край):\n");

    while(1) 
    {
        scanf("%d", &num);

        if(num == 0) 
        {
            break;
        }


        max_num = get_max(max_num, num);
        min_num = get_min(min_num, num);
    }

    printf("Най-голямото число е: %d\n", max_num);
    printf("Най-малкото число е: %d\n", min_num);

    return 0;
}