#include <stdio.h>

int main() 
{
    double V, debit1, debit2;
    int N;

    scanf("%lf", &V);
    scanf("%lf", &debit1);
    scanf("%lf", &debit2);
    scanf("%d", &N);

    double total_water = (debit1 + debit2) * N /1000;


    if (total_water >= V) 
    {
        printf("Overflow\n");
    } 
    else 
    {
        printf("Not full");
    }
    return 0;
}