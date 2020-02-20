#include<stdio.h>
int main()
{
    int num,rem,mul=0;
    printf("Enter your number: ");
    scanf("%d",&num);
    int q=num;
    while(q!=0)
    {
        rem=q%10;
        mul=mul*10+rem;
        q=q/10;
    }
    if(num==mul)
    {
        printf("%d is palindrome!");
    }else{
        printf("%d is not palindrome!",num);
    }
    return 0;
}
