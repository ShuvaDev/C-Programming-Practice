#include<stdio.h>
int main()
{
    int n=4;
    /**
        1
       121
      12312
     1234123
    **/
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        for(int l=1;l<=i-1;l++)
        {
            printf("%d",l);
        }
        puts("");
    }
    /**
     1234123
      12312
       121
        1
    **/
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        for(int l=1;l<=i-1;l++)
        {
            printf("%d",l);
        }
        puts("");
    }
    return 0;
}

