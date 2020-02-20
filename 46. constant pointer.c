#include<stdio.h>
int main()
{
    int a=10,b=10;
    const int *ptr=&a;
    ptr=&b;
    /** *ptr=20; -> We cannot do it.**/
    int * const ptr1=&b;
    /** ptr1=&b; -> We cannot do it.**/
    *ptr1=20;
    return 0;
}
