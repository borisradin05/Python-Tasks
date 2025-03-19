#include <stdio.h>

int stringLengthBoris(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length - 1;
}

int main() {
    char str[100];
    int len;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len = stringLengthBoris(str);
    printf("The length of the string is: %d\n", stringLengthBoris(str));
    return 0;
}