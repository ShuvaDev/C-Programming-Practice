#include<stdio.h>
#define n 3
int main()
{
    int ara[n]={10,9,8};
    int temp;
    for(int i=0,j=n-1;i<=j;i++,j--)
    {
        temp=ara[i];
        ara[i]=ara[j];
        ara[j]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d  ",ara[i]);
    }

    return 0;
}
