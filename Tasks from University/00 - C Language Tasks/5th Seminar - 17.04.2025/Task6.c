#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ALPHABET_SIZE 26

int areAnagrams(char str1[], char str2[]) {
    int count[ALPHABET_SIZE] = {0};

    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    for (int i = 0; str1[i] != '\0'; i++) {
        if (isalpha(str1[i])) {
            count[tolower(str1[i]) - 'a']++;
        }
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        if (isalpha(str2[i])) {
            count[tolower(str2[i]) - 'a']--;
        }
    }

    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Въведете първия низ: ");
    scanf("%s", str1);

    printf("Въведете втория низ: ");
    scanf("%s", str2);

    if (areAnagrams(str1, str2)) {
        printf("Низовете са анаграма.\n");
    } else {
        printf("Низовете не са анаграма.\n");
    }

    return 0;
}