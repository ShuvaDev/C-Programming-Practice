#include<stdio.h>
#include<stdlib.h>
struct std{
    int roll;
    char name[50];
};
int main()
{
    struct std s1={1,"Shuva"};
    struct std *p=&s1;
    scanf("%d",&(*p).roll);
    printf("%d",s1.roll);
    return 0;
}

