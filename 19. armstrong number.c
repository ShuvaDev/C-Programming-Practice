#include<stdio.h>
int main()
{
    /**
        Armstrong number: 153, 371
        -> In this number we show there have only 3 digit.
        -> If we multiplied each digit with each digit in 3 times and sumation of multiplied
        digit is same number then we call it Armstrong number.
    */
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    int count=0,q=num,sum=0,rem,mul=1;
    while(q!=0)
    {
        q=q/10;
        count++;
    }
    int c=count;
    q=num;
    while(q!=0)
    {
        rem=q%10;
        while(c!=0)
        {
            mul=mul*rem;
            c--;
        }
        sum=sum+mul;
        c=count;
        mul=1;
        q=q/10;
    }
    if(sum==num)
    {
        printf("%d is armstrong number!\n",num);
    }else{
        printf("%d is not armstrong number!\n",num);
    }
}
