#include<stdio.h>
struct std
{
    char name[50];
    int roll;
}s1={"Shanto",12};
int main()
{
    // We can initialize a char ara[](string) using brace('{}')
    struct std s2={"Shuva",10};
    printf("%s\n",s1.name);
    printf("%s",s2.name);
    return 0;
}

