#include<stdio.h>
int main()
{
    // Check given number is power of 2 or not.
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    if(n>0 && (n&(n-1))==0)
    {
        printf("%d is power of 2!",n);
    }else{
        printf("%d is not power of 2!",n);
    }
}

