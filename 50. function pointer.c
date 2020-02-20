#include<stdio.h>
int add(int n1,int n2)
{
    return n1+n2;
}
int sub(int (*fun)(int,int),int n)
{
    return fun(10,20)-(n);
}
int main()
{
    int (*fun)(int,int);
    fun=add;
    printf("sum: %d\n",fun(10,20));
    printf("sub: %d\n",sub(&add,10));
    return 0;
}
