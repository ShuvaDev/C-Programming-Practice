#include<stdio.h>
void revP(char ara[],int n)
{
    if(n==0)
        return;
    printf("%c\t",ara[n-1]);
    revP(ara,n-1);
}
int main()
{
    int size=0,i=0;
    char ara[50];
    gets(ara);
    while(ara[i]!='\0')
    {
        size++;
        i++;
    }
    revP(ara,size);
    return 0;
}


