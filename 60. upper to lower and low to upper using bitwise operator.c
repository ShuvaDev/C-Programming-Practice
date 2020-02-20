#include<stdio.h>
int to_upper(int c)
{
    return c&95;
}
int to_lower(int c)
{
    return c|32;
}
int main()
{
    char *ptr="AbCdEfGh";
    for(int i=0;i<8;i++)
    {
        printf("%c ",to_upper(*(ptr+i)));
    }
    puts("");
    for(int i=0;i<8;i++)
    {
        printf("%c ",to_lower(*(ptr+i)));
    }
    return 0;
}
