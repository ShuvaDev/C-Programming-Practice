#include<stdio.h>
#include<math.h>
int main()
{
    int num,count=0;
    printf("Enter your number: ");
    scanf("%d",&num);
    int x=ceil(sqrt(num));
    if(num==1)
    {
        printf("%d is not prime number!",num);
    }else{
        for(int i=2;i<=x;i++)
        {
            if(num%i==0)
            {
                count=1;
                break;
            }
        }
        if(count==0)
        {
            printf("%d is prime number!",num);
        }else{
            printf("%d is not prime number!",num);
        }
    return 0;
}
