#include<stdio.h>
struct std{
    char *name;
    int roll;
};
int main()
{
    struct std s1;
    s1.name="Shuva";
    s1.roll=10;
    struct std *s2=&s1;
    printf("%s\n",s2->name);
    printf("%s\n",(*s2).name);
    return 0;
}
