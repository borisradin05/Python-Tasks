#include <stdio.h>
#include <stdbool.h>

int countWordsBoris(char str[]) {
    int count = 0;
    bool inCurrentWord = false;
    int i = 0;

    while (str[i] != '\0') 
    {
        if (str[i] == ' ') 
        {
            inCurrentWord = false;
        } 
        else if (inCurrentWord == false) 
        {
            inCurrentWord = true;
            count++;
        }
        i++;
    }

    return count;
}

int main() {
    char input[1000];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    int wordCount = countWordsBoris(input);
    printf("The number of words in the string is: %d\n", wordCount);

    return 0;
}