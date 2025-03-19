#include <stdio.h>
#include <string.h>

int CountOfGlasniBoris(char str[])
{
    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y')
        {
            count++;
        }
        i++;
    }
    return count;
}

int main()
{
    char str[100];
    int count;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    count = CountOfGlasniBoris(str);
    printf("The number of glasni in the string is: %d\n", count);
    return 0;
}