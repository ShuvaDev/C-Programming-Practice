#include<stdio.h>
struct ab
{
    char a;
    int b;
};
int main()
{
    struct ab x;
    x.a='s';
    x.b=10;
    struct ab *p=&x;
    printf("%d",*((int*)((char*)p+4)));
    return 0;
}

