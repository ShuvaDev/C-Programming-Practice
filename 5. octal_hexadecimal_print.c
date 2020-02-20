#include<stdio.h>
int main()
{
    /**  Octal int- %o  */
    int x=011;
    printf("octal to decimal:  %d\n",x);
    printf("octal: %o\n",x);
    /** Hexadecimal - %x, %X */
    int y=0xf;
    printf("hexadecimal to decimal: %d\n",y);
    printf("hexadecimal using %%X: %X\n",y);
    printf("hexadecimal using %%x: %x\n",y);
    /** We can represent binary value using 0b or 0B prefix */
    int z=0B1010;
    printf("Binary to decimal: %d",z);
    return 0;
}


