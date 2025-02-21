#include <stdio.h>
int main() {
    int totalSecs; 
    int hours;
    int mins;
    int secs;

    printf("Вкарайте секундите: ");
    scanf("%d", &totalSecs);

    hours = totalSecs / 3600; //3661 / 3600 = 1
    mins = (totalSecs % 3600) / 60; // 3661 % 3600 = 61 / 60 = 1
    secs = totalSecs % 60; // 3661 % 60 = 1

    printf("%d секунди са равни на %d часа, %d минки, and %d секудки.\n", totalSecs, hours, mins, secs);
}