#include<stdio.h>
int main()
{
    int row=2,col=2,*p;
    int ara[2][2]={{1,2},{3,4}};
    for(p=&ara[0][0];p<=&ara[row-1][col-1];p++)
        printf("%d\t",*p);
    return 0;
}
