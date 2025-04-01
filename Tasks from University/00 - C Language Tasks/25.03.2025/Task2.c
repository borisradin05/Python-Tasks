#include <stdio.h>
#include <string.h>


int main() 
{
    char text[20];
    int letters[256];
    for (int i = 0; i < 256; i++) 
    {
        letters[i] = 0;
    }

    printf("Въведи текст: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++) 
    {
        letters[(int)text[i]]++;
    }

    printf("Букви:\n");
    for (int i = 0; i < 256; i++) 
    {
        if (letters[i] > 0) 
        {
            printf("%c - %d\n", i, letters[i]);
        }
    }

    return 0;
}
