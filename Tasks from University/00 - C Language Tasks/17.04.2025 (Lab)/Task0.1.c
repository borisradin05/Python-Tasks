#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    FILE *fp;
    int i;

    if ((fp = fopen("myfile", "wb")) == NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    i = 100;

    if (fwrite(&i, 2, 1, fp) != 1)
    {
        printf("Error writing to file.\n");
        exit(1);
    }
    fclose(fp);

    
}