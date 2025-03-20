#include <stdio.h>

int main() {
    int points;
    int bonus_points = 0;

    printf("");
    scanf("%d", &points);

    if (points <= 100) {
        bonus_points = 5;
    } else if (points > 100 && points <= 1000) {
        bonus_points = points * 0.2;
    } else if (points > 1000) {
        bonus_points = points * 0.1;
    }

    if (points % 2 == 0) {
        bonus_points += 1;
    }

    if (points % 10 == 5) {
        bonus_points += 2;
    }

    int total_points = points + bonus_points;

    printf("%d\n", bonus_points);
    printf("%d\n", total_points);

    return 0;
}