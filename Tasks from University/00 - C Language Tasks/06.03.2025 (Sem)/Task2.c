#include <stdio.h>

int main() 
{
    int hours,minutes;
    scanf("%d", &hours);
    scanf("%d", &minutes);


    minutes+=15;
    if(minutes>59)
    {
        hours++;
        minutes=minutes%60;
    }
    if(hours>23)
    {
        hours=0;
    }
    if(minutes<10)
    {
    printf("%d:%02d",hours,minutes);
    }
    else
    {
       printf("%d:%02d",hours,minutes);
    }

    return 0;
}