#include<stdio.h>
int main()
{
    FILE *fp;
    char ara[100];
    fp=fopen("file1.txt","w");
    if(fp==NULL)
    {
        printf("Error!");
        exit(1);
    }
    fprintf(fp,"I am S.R. Shuva Dev!\n");
    fprintf(fp,"%s","I am 10 years old");
    fputs("ALL OK!\n",fp);
    fputc('a',fp);
    fclose(fp);
    return 0;
}
