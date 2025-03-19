#include <stdio.h>
#include <ctype.h>

void toUpperCaseBoris(char str[]) 
{
    int i = 0;
    while (str[i] != '\0') 
    {
        if (islower(str[i])) 
        {
            str[i] = toupper(str[i]);
        }
        i++;
    }
}

int main() {
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    toUpperCaseBoris(input);

    printf("String in uppercase: %s", input);

    return 0;
}