#include <stdio.h>

int main() {
    float leva;
    float usd_rate = 0.58; 
    float eur_rate = 0.51; 
    float gbp_rate = 0.44; 

    printf("Въведете сума в лева ");
    scanf("%f", &leva);

    float usd = leva * usd_rate;
    float eur = leva * eur_rate;
    float gbp = leva * gbp_rate;

    printf("%.2f Лева са равни на:\n", leva);
    printf("%.2f USD\n", usd);
    printf("%.2f EUR\n", eur);
    printf("%.2f GBP\n", gbp);

    return 0;
}