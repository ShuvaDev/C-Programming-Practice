#include<Stdio.h>
int main()
{
    /** GCD & LCM **/
    /**
        a = 60
        b = 24
        a  % b  = 12
        24 % 12 = 0
        GCD: b
        LCM: a*b/GCD
    **/
    int a,b,rem,n1,n2,LCM;
    printf("Enter your first number: ");
    scanf("%d",&a);
    printf("Enter your second number: ");
    scanf("%d",&b);
    n1=a;n2=b;rem=a%b;
    while(rem!=0)
    {
        a = b;
        b = rem;
        rem=a%b;
    }
    printf("GCD of %d and %d is: %d!\n",n1,n2,b);
    LCM=n1*n2/b;
    printf("LCM of %d and %d is: %d!\n",n1,n2,LCM);
    return 0;
}
