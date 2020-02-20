#include<stdio.h>
int main()
{
    int n=4;
    int t=n*2-2;
    int temp=n;
    int ara[7][7]={0};
    for(int i=0;i<=t;i++)
    {
        for(int j=i;j<=t-i;j++)
        {
            ara[i][j]=temp;
        }
        for(int j=i+1;j<=t-i;j++)
        {
            ara[j][t-i]=temp;
        }
        for(int j=i;j<=t-1-i;j++)
        {
            ara[t-i][j]=temp;
        }
        for(int j=i+1;j<=t-1-i;j++)
        {
            ara[j][i]=temp;
        }
        temp--;
    }

    for(int i=0;i<=t;i++)
    {
        for(int j=0;j<=t;j++)
        {
            printf("%d ",ara[i][j]);
        }
        puts("");
    }
    return 0;
}

