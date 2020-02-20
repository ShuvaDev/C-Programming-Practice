#include<stdio.h>
int* findMid(int[],int);
int main()
{
    int ara[5]={1,2,3,4,5};
    int n=sizeof(ara)/sizeof(ara[0]);
    int *mid=findMid(ara,n);
    printf("Mid: %d",*mid);
    return 0;
}
int* findMid(int a[],int n)
{
    return &a[n/2];
}
