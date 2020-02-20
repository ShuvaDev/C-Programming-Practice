#include<stdio.h>
int main()
{
    int num1,num2,a,b;
    printf("Enter your first number: ");
    scanf("%d",&num1);
    printf("Enter your second number: ");
    scanf("%d",&num2);
    a=num1,b=num2;
    if(b>0)
    {
        while(b!=0)
        {
            a++;
            b--;
        }
        printf("%d + %d = %d\n",num1,num2,a);
    }else{
        while(b!=0)
        {
            a--;
            b++;
        }
        printf("%d + %d = %d\n",num1,num2,a);
    }
    return 0;
}
