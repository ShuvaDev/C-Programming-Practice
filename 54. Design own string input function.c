#include<stdio.h>
int input(char a[],int n)
{
    char ch,i=0;
    while((ch=getchar())!='\n')
    {
        if(i<5)
        {
            a[i++]=ch;
        }
        a[i]='\0';
    }
    return i;
}
int main()
{
    char str[100];
    int n=input(str,5);
    printf("%d  %s",n,str);
    return 0;
}
