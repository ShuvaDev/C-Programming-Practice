#include<stdio.h>
int main()
{
    /** Ex- 1 */
    int a=(3,4,8);
    printf("a = %d\n",a);
    /**
        Note:
            Comma operator return the rightmost operand in the expression
            and it simply evaluate the rest of the operands and finally
            reject them.
    */
    /** Ex- 2 */
    int var=(printf("%s\n","Hi"),5);
    printf("var = %d\n",var);
    /**
        Note:
            Comma operator is having least precedence among all the operators
            available in C.
    */
    /** Ex- 3 */
    // int x=3,4,5;  -> it is same as int x=3,int 4,int 5. So here an error occur.
    // printf("%d",x);
    /** Ex-4 */
    int b,c;
    b=3,4,8;
    printf("b = %d\n",b);
    return 0;
}
