#include<stdio.h>
int main()
{
    /**
        2^3  = 2*2*2
        2^-3 = 1/2 * 1/2 * 1/2
        3^-3 = 1/3 * 1/3 * 1/3
    **/
    int base,exponent,expo,power=1;
    double power1=1.0;
    printf("Enter the base: ");
    scanf("%d",&base);
    printf("Enter the exponent: ");
    scanf("%d",&exponent);
    expo=exponent;
    if(exponent>0)
    {
        while(expo)
        {
            power=power*base;
            expo--;
        }
        printf("%d to the power of %d is %d!\n",base,exponent,power);
        power=1,expo=exponent;
    }else{
        while(expo)
        {
            power1=power1*(1.0/base);
            expo++;
        }
        printf("%d to the power of %d is %.3lf!\n",base,exponent,power1);
    }
    return 0;
}
