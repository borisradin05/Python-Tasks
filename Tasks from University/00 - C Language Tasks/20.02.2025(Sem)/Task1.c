
int main() {
    const char *numbers[] = {
        "One", "Two", "Three", "Four", "Five", 
        "Six", "Seven", "Eight", "Nine", "Ten", "ELEVEN"
    };

    for (int i = 0; i < 10; i++) {
        printf("%s\n", numbers[i]);
    }

    return 0;
}