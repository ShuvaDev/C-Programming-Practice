#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int x;
    char a[100]="color ";
    char b[]="ABCDEF";
    char c[200];
    gets(c);
    for(int j=0;j<strlen(c);j++)
    {

        system("CLS");
        for(int k=1;k<=j;k++)
        {
            printf(" ");
        }
        a[6]=b[j%6];
        a[7]='\0';
        system(a);
        printf("%c",c[j]);
        system("timeout 1 >null");
    }

    return 0;
}

