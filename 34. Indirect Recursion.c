#include<stdio.h>
/** Indirect recursion **/
int n=1;
void odd()
{
    if(n>10)
        return;
    printf("%d ",++n);
    even();
}
void even()
{
    printf("%d ",n-1);
    n++;
    odd();
}
void main()
{
    odd();
}

