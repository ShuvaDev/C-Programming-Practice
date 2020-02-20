#include<stdio.h>
#include<math.h>
int main()
{
    /** Perfect Number: 6 **/
    /** 6 -> 1 + 2 +3 **/
    int num,sum=0;
    printf("Enter your number: ");
    scanf("%d",&num);
    for(int i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    printf("Result: %d",sum);
    return 0;
}
