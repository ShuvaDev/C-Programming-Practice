#include<stdio.h>
int main()
{
    /**
        The sizeof operator give us the size of its operands, which may be an
        expression or a name of type.
        => If the type of the operand is a variable length array type, then the
        operand is evaluated; otherwise, the operand is not evaluated.
    */
    int x=10;
    int var=sizeof(x++);
    printf("x = %d\tvar = %d\n",x,var);
    return 0;
}
