#include <stdio.h>
#include <stdlib.h>

void createBinaryFile(const char *filename, int *numbers, int count) {
    FILE *file = fopen(filename, "wb");
    fwrite(numbers, sizeof(int), count, file);
    fclose(file);
}

void countEvenOddDigits(const char *filename, int *evenCount, int *oddCount) {
    FILE *file = fopen(filename, "rb");

    int number;
    *evenCount = 0;
    *oddCount = 0;

    while (fread(&number, sizeof(int), 1, file)) {
        while (number != 0) {
            int digit = abs(number % 10);
            if (digit % 2 == 0) {
                (*evenCount)++;
            } else {
                (*oddCount)++;
            }
            number /= 10;
        }
    }

    fclose(file);
}

void sortArrayAndWriteToFile(const char *binaryFilename, const char *textFilename) 
{
    //Tук помогна Copilot-a
    FILE *binaryFile = fopen(binaryFilename, "rb");

    fseek(binaryFile, 0, SEEK_END);
    long fileSize = ftell(binaryFile);
    fseek(binaryFile, 0, SEEK_SET);
    int count = fileSize / sizeof(int);

    int *numbers = (int *)malloc(count * sizeof(int));

    fread(numbers, sizeof(int), count, binaryFile);
    fclose(binaryFile);

    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (numbers[i] > numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    FILE *textFile = fopen(textFilename, "w");

    for (int i = 0; i < count; i++) {
        fprintf(textFile, "%d\n", numbers[i]);
    }

    fclose(textFile);
    free(numbers);
}

int main() {
    const char *binaryFilename = "numbers.bin";
    const char *textFilename = "sorted_numbers.txt";

    int numbers[] = {123, 456, 789, 101, 202, 303};
    int count = sizeof(numbers) / sizeof(numbers[0]);

    createBinaryFile(binaryFilename, numbers, count);

    int evenCount, oddCount;
    countEvenOddDigits(binaryFilename, &evenCount, &oddCount);
    printf("Четни цифри: %d\n", evenCount);
    printf("Нечетни цифри: %d\n", oddCount);

    sortArrayAndWriteToFile(binaryFilename, textFilename);

    return 0;
}