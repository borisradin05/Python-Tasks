#include <stdio.h>
#include <stdlib.h>

void createBinaryFile(const char *filename, int *numbers, int n)
 {
    // Много, много, много ми се ходи до тоалетна, моля да ме пуснете ако всичко е наред. Трудно държа вече.
    FILE *file = fopen(filename, "wb");
    if (!file) 
    {
        perror("Error opening file");
        return;
    }
    fwrite(&n, sizeof(int), 1, file);
    fwrite(numbers, sizeof(int), n, file);
    fclose(file);
}

void countEvenOddDigits(const char *filename) 
{
    FILE *file = fopen(filename, "rb");
    if (!file) 
    {
        perror("Error opening file");
        return;
    }

    int n;
    fread(&n, sizeof(int), 1, file);

    int number, evenCount = 0, oddCount = 0;
    for (int i = 0; i < n; i++) 
    {
        fread(&number, sizeof(int), 1, file);
        while (number != 0) 
        {
            int digit = abs(number % 10);
            if (digit % 2 == 0)
                evenCount++;
            else
                oddCount++;
            number /= 10;
        }
    }

    fclose(file);
    printf("Even digits: %d\n", evenCount);
    printf("Odd digits: %d\n", oddCount);
}

void sortAndWriteToTextFile(const char *binaryFilename, const char *textFilename) 
{
    FILE *file = fopen(binaryFilename, "rb");
    if (!file) 
    {
        perror("Error opening binary file");
        return;
    }

    int n;
    fread(&n, sizeof(int), 1, file);

    int *numbers = (int *)malloc(n * sizeof(int));
    if (!numbers) 
    {
        perror("Memory allocation failed");
        fclose(file);
        return;
    }

    fread(numbers, sizeof(int), n, file);
    fclose(file);

    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (numbers[i] > numbers[j]) 
            {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    FILE *textFile = fopen(textFilename, "w");
    if (!textFile) 
    {
        perror("Error opening text file");
        free(numbers);
        return;
    }

    for (int i = 0; i < n; i++) 
    {
        fprintf(textFile, "%d\n", numbers[i]);
    }

    fclose(textFile);
    free(numbers);
}

int main() 
{
    const char *binaryFilename = "numbers.bin";
    const char *textFilename = "sorted_numbers.txt";

    int numbers[] = {123, 456, 789, 101, 202};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    createBinaryFile(binaryFilename, numbers, n);
    countEvenOddDigits(binaryFilename);
    sortAndWriteToTextFile(binaryFilename, textFilename);

    return 0;
}