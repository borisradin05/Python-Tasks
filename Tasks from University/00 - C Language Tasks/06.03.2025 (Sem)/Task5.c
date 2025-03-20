#include <stdio.h>

int main() 
{
    int times = 0, time_seconds;

    for (int i = 0; i < 3; i++) 
    {
        scanf("%d", &time_seconds);
        times += time_seconds;
    }

    int minutes = times / 60;

    int seconds = times % 60;

    printf("%d:%02d\n", minutes, seconds);

    return 0;
}