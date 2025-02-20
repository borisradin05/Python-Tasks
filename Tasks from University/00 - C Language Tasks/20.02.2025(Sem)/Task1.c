#include <stdio.h>
int main() {
    const char *numbers[] = {
        "One", "Two", "Three", "Four", "Five", 
        "Six", "Seven", "Eight", "Nine", "Ten", "Eleven"
    };

    for (int i = 0; i < 11; i++) {
        printf("%s\n", numbers[i]);
    }

    return 0;
}