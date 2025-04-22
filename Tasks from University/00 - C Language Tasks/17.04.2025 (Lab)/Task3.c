#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char brand[20];
    char model[6];
    float engine_size;
    float price;
    char registration; 
} Car;

void addRecord(FILE *binaryFile, FILE *textFile) 
{
    Car car;

    printf("Въведете марка на колата: ");
    scanf("%19s", car.brand);

    printf("Въведете модел на колата (макс. 5 символа): ");
    scanf("%5s", car.model);

    printf("Въведете обем на двигателя: ");
    scanf("%f", &car.engine_size);

    printf("Въведете цена: ");
    scanf("%f", &car.price);

    printf("Регистрирана ли е колата? (Y/N): ");
    scanf(" %c", &car.registration);

    fwrite(&car, sizeof(Car), 1, binaryFile);

    fprintf(textFile, "%s %s %.2f %.2f %c\n", car.brand, car.model, car.engine_size, car.price, car.registration);
}

void readAndDisplayFiles(const char *binaryFileName, const char *textFileName) 
{
    FILE *binaryFile = fopen(binaryFileName, "rb");
    FILE *textFile = fopen(textFileName, "r");

    Car car;
    while (fread(&car, sizeof(Car), 1, binaryFile)) 
    {
        printf("%s %s %.2f %.2f %c\n", car.brand, car.model, car.engine_size, car.price, car.registration);
    }

    char line[100];
    while (fgets(line, sizeof(line), textFile)) 
    {
        printf("%s", line);
    }

    fclose(binaryFile);
    fclose(textFile);
}

int main() {
    const char *binaryFileName = "cars.dat";
    const char *textFileName = "cars.txt";

    FILE *binaryFile = fopen(binaryFileName, "ab");
    FILE *textFile = fopen(textFileName, "a");

    int choice;
    do 
    {
        printf("\n1. Добавяне на нов запис\n");
        printf("2. Показване на записи от файловете\n");
        printf("3. Изход\n");
        printf("Въведете вашия избор: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addRecord(binaryFile, textFile);
                break;
            case 2:
                fclose(binaryFile);
                fclose(textFile);
                readAndDisplayFiles(binaryFileName, textFileName);
                binaryFile = fopen(binaryFileName, "ab");
                textFile = fopen(textFileName, "a");
                break;
            case 3:
                printf("Изход...\n");
                break;
            default:
                printf("Невалиден избор. Опитайте отново.\n");
        }
    } 
    while (choice != 3);

    fclose(binaryFile);
    fclose(textFile);

    return 0;
}