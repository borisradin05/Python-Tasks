#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[80] = "This is a file system test. \n";
    FILE *fp;
    char *p;
    int i;

    if((fp = fopen("test.txt", "w")) == NULL) 
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    p = str;
    while(*p)
    {
        if(fputc(*p, fp) == EOF) 
        {
            printf("Error writing to file.\n");
            exit(1);
        }
        p++;
    }
    fclose(fp);
}