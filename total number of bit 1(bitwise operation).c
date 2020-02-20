#include<stdio.h>
int main()
{
    // Count the total number of bit 1 from a binary number..
    int n,count=0;
    printf("Enter your number: ");
    scanf("%d",&n);
    while(n)
    {
        if((n&1)==1)
        {
            count++;
        }
        n=n>>1;
    }
    printf("Total number of bit 1: %d!",count);
}
