#include<stdio.h>
int main()
{
    int a=1;
    int b=1;
    int c = ++a || b++; /** Short circuit operation occur here.
    Because in here ++a is true so or operator don't check b++ is true
    or false.**/
    int d= b-- && --a;
    printf("%d %d %d %d",a,b,c,d);
    return 0;
}

