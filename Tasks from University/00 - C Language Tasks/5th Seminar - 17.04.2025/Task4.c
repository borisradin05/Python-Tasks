#include <stdio.h>
#include <stdlib.h>

void encodeFile(const char *inputFileName, const char *outputFileName, int key) {
    FILE *inputFile = fopen(inputFileName, "r");
    FILE *outputFile = fopen(outputFileName, "w");

    if (inputFile == NULL) {
        printf("Грешка: Не може да се отвори файлът за четене.\n");
        return;
    }

    if (outputFile == NULL) {
        printf("Грешка: Не може да се отвори файлът за запис.\n");
        fclose(inputFile);
        return;
    }

    char ch;
    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(ch + key, outputFile);
    }

    printf("Файлът беше успешно кодиран и записан в %s.\n", outputFileName);

    fclose(inputFile);
    fclose(outputFile);
}

int main() {
    char inputFileName[256];
    char outputFileName[256];
    int key;

    printf("Въведете името на файла за кодиране: ");
    scanf("%255s", inputFileName);

    printf("Въведете името на изходния файл: ");
    scanf("%255s", outputFileName);

    do {
        printf("Въведете ключ за кодиране (цяло число между 2 и 10): ");
        scanf("%d", &key);
        if (key < 2 || key > 10) {
            printf("Грешка: Ключът трябва да бъде между 2 и 10.\n");
        }
    } while (key < 2 || key > 10);

    encodeFile(inputFileName, outputFileName, key);

    return 0;
}