#include <stdio.h>
#include <ctype.h>
#include <string.h>

void countLettersBoris(char str[], int counts[26]) 
{
    for (int i = 0; i < 26; i++) 
    {
        counts[i] = 0;
    }

    int i = 0;
    while (str[i] != '\0') 
    {
        if (isalpha(str[i])) 
        {
            char lower = tolower(str[i]);
            counts[lower - 'a']++;
        }
        i++;
    }
}

int main() 
{
    char input[100];
    int counts[26];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; 

    countLettersBoris(input, counts);

    for (int i = 0; i < 26; i++) 
    {
        if (counts[i] > 0) 
        {
            printf("%c: %d\n", 'a' + i, counts[i]);
        }
    }

    return 0;
}