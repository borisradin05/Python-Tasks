#include <stdio.h>
#include <string.h>

int compareStringsBoris(char str1[], char str2[])
{
    int result = 1;
    int i = 0;
    int j = 0;
    int len = strlen(str1);
    if (len != strlen(str2)) 
    {
        result = 0;
        return result;
    }

    while (str1[i] != '\0') 
    {
        if (str1[i] != str2[j]) 
        {
            result = 0;
            break;
        }
        i++;
        j++;
    }
    return result;
}

int main()
{
    char str1[100];
    char str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int result = compareStringsBoris(str1, str2);
    if (result == 1) 
    {
        printf("The strings are equal.\n");
    } 
    else 
    {
        printf("The strings are not equal.\n");
    }

    return 0;
}