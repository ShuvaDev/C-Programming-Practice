#include<stdio.h>
int main()
{
    int num,rem,div,weight=1,sum=0;
    printf("Enter your binary digit(0,1): ");
    scanf("%d",&num);
    div=num;
    while(div!=0)
    {
        rem=div%10;
        sum=sum+rem*weight;
        div=div/10;
        weight=weight*2;
    }
    printf("%d = %d",num,sum);
    return 0;
}
