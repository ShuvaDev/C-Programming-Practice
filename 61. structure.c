#include<stdio.h>
#include<string.h>
struct{
    char *name;
    int age;
}a;
int main()
{
    a.name="SHUVA";
    a.age=18;
    printf("%s\n",a.name);
    printf("%d\n",a.age);
    return 0;
}
