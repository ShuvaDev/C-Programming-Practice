#include<stdio.h>
typedef union{
    int a;
    char b;
    double c;
}data;
int main()
{
    data ara[10];
    ara[0].a=10;
    ara[1].b='a';
    ara[2].c=10.178;
    return 0;
}
