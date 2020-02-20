#include<stdio.h>
struct Ournode{
    char x,y,z;
};
int main()
{
    struct Ournode p={'a','0','a'+2};
    struct Ournode *q=&p;
    printf("%c\t%c",*((char *)q+1),*((char *)q+2));
    return 0;
}
