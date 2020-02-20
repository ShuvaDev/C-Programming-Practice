#include<stdio.h>
struct std{
    char name[50];
    int roll;
    int age;
};
int main()
{
    // Designated initialization has more priority than normal initialization.
    struct std s1={"ShuvaDev",.name="Shuva",.age=18,.roll=12};
    printf("%s\n",s1.name);
    printf("%d\n",s1.roll);
    printf("%d",s1.age);
    return 0;
}
