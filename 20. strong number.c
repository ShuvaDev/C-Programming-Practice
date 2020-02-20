#include<stdio.h>
int main()
{
    /**
        Strong number 145:
            If we determine the factorial with each digit and if sumation of them
            is same number then we call it strong number.
            145 = 1! + 4! + 5! = 1 + 24 + 120 = 145
    **/
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    int sum=0,q=num,rem,fact=1;
    while(q!=0)
    {
        rem=q%10;
        for(int i=1;i<=rem;i++)
        {
            fact = fact*i;
        }
        sum=sum+fact;
        fact=1;
        q=q/10;
    }
    if(num==sum)
    {
        printf("%d is strong number!\n",num);
    }else{
        printf("%d is not strong number!\n",num);
    }
    return 0;
}
