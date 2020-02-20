#include<stdio.h>
int fibo(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    for(int i = 1;i<=45;i++)
    {
        printf("%dth value is: %d!\n",i,fibo(i));
    }
    return 0;
}
