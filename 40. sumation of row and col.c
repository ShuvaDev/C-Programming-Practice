#include<stdio.h>
int main()
{
    int x=3,y=3;
    int ara[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sum=0;
    for(int i=0;i<3;i++)
    {
        printf("Sumation of row %d: ",i);
        for(int j=0;j<3;j++)
        {
            sum+=ara[i][j];
        }
        printf("%d!\n",sum);
        sum=0;
    }
    sum=0;
    puts("");
    for(int i=0;i<3;i++)
    {
        printf("Sumation of col %d: ",i);
        for(int j=0;j<3;j++)
        {
            sum+=ara[j][i];
        }
        printf("%d!\n",sum);
        sum=0;
    }
    return 0;
}
