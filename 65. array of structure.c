#include<stdio.h>
struct std{
    char *name;
    int roll;
};
int main()
{
    struct std ara[2]={{"Shuva",10},{"Shanto",11}};
    for(int i=0;i<2;i++)
    {
        printf("Information of student %d:\n",i+1);
        printf("Name: %s\n",ara[i].name);
        printf("Roll: %d\n\n",ara[i].roll);
    }
    return 0;
}
