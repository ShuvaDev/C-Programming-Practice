#include<stdio.h>
int main()
{
    int ara[2][2]={{1,2},{3,4}};
    /**
        ara[0]=&ara[0];// address of row 0
        ara[1]=&ara[1];// address of row 1
    **/
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d\t",*(*(ara+i))+j);
        }
        puts("");
    }
    return 0;
}

