#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 50

void readWordsFromFile(const char *filename, char ***words, int *count) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Неуспешно отваряне на текстовия файл");
        exit(EXIT_FAILURE);
    }

    char word[MAX_WORD_LENGTH + 1];
    *count = 0;
    *words = NULL;

    while (fscanf(file, "%50s", word) == 1) {
        *words = realloc(*words, (*count + 1) * sizeof(char *));
        (*words)[*count] = malloc(strlen(word) + 1);
        strcpy((*words)[*count], word);
        (*count)++;
    }

    fclose(file);
}

void filterWords(char **words, int count, char ***filteredWords, int *filteredCount) {
    *filteredCount = 0;
    *filteredWords = NULL;

    if (count == 0) return;

    *filteredWords = malloc(sizeof(char *));
    (*filteredWords)[0] = malloc(strlen(words[0]) + 1);
    strcpy((*filteredWords)[0], words[0]);
    *filteredCount = 1;

    char lastChar = words[0][strlen(words[0]) - 1];

    for (int i = 1; i < count; i++) {
        if (tolower(words[i][0]) == tolower(lastChar)) {
            *filteredWords = realloc(*filteredWords, (*filteredCount + 1) * sizeof(char *));
            (*filteredWords)[*filteredCount] = malloc(strlen(words[i]) + 1);
            strcpy((*filteredWords)[*filteredCount], words[i]);
            (*filteredCount)++;
            lastChar = words[i][strlen(words[i]) - 1];
        }
    }
}

void writeWordsToBinaryFile(const char *filename, char **words, int count) {
    FILE *file = fopen(filename, "wb");
    if (!file) {
        perror("Неуспешно отваряне на бинарния файл за запис");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < count; i++) {
        fwrite(words[i], sizeof(char), strlen(words[i]), file);
        if (i < count - 1) {
            fwrite(" ", sizeof(char), 1, file);
        }
    }

    fclose(file);
}

void readWordsFromBinaryFile(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        perror("Неуспешно отваряне на бинарния файл за четене");
        exit(EXIT_FAILURE);
    }

    char ch;
    while (fread(&ch, sizeof(char), 1, file) == 1) {
        putchar(ch);
    }
    putchar('\n');

    fclose(file);
}

void freeWords(char **words, int count) {
    for (int i = 0; i < count; i++) {
        free(words[i]);
    }
    free(words);
}

int main() {
    char **words = NULL, **filteredWords = NULL;
    int wordCount = 0, filteredCount = 0;

    readWordsFromFile("input.txt", &words, &wordCount);
    filterWords(words, wordCount, &filteredWords, &filteredCount);
    writeWordsToBinaryFile("output.bin", filteredWords, filteredCount);

    printf("Съдържание на бинарния файл:\n");
    readWordsFromBinaryFile("output.bin");

    freeWords(words, wordCount);
    freeWords(filteredWords, filteredCount);

    return 0;
}