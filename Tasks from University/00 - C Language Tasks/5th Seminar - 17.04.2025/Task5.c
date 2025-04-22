#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 100

void displayWord(char word[], int revealed[]) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (revealed[i]) {
            printf("%c", word[i]);
        } else {
            printf("_");
        }
    }
    printf("\n");
}

int main() {
    char word[MAX_WORD_LENGTH] = "concatenation";
    int wordLength = strlen(word);
    int revealed[MAX_WORD_LENGTH] = {0}; 
    int attempts = 0;
    int correctGuesses = 0;

    printf("Добре дошли в играта \"Бесеница\"!\n");
    printf("Думата има %d букви.\n", wordLength);

    while (correctGuesses < wordLength && attempts <= wordLength + 2) {
        printf("Текущо състояние на думата: ");
        displayWord(word, revealed);

        printf("Въведете буква: ");
        char guess;
        scanf(" %c", &guess);
        guess = tolower(guess); 

        int found = 0;
        for (int i = 0; i < wordLength; i++) {
            if (word[i] == guess && !revealed[i]) {
                revealed[i] = 1;
                correctGuesses++;
                found = 1;
            }
        }

        if (!found) {
            printf("Буквата '%c' не е в думата.\n", guess);
        } else {
            printf("Познахте буква '%c'!\n", guess);
        }

        attempts++;
    }

    if (correctGuesses == wordLength) {
        printf("Поздравления! Познахте думата \"%s\" с %d опита.\n", word, attempts);
    } else {
        printf("За съжаление не успяхте. Думата беше \"%s\".\n", word);
    }

    return 0;
}