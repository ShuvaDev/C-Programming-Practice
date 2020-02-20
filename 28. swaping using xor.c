#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    a = a^b;
    b = a^b;
    a = a^b;
    printf("a = %d\tb = %d",a,b);
    return 0;
}
