#include<stdio.h>
int main()
{
    char x=146;
    char ch1=-128;
    char ch2=-127;
    printf("146 = %c",x);
    printf("-128 = %c\n",ch1);
    printf("-127 = %c\n",ch2);
    /**
    146 = 1001 0010
    when we give 146 in signed character then it initialized with -110
    +110 = 0110 1110
    -110 = 1001 0010
    -110 and 146 binary value are same so we see the value of 146.
    **/
    /**
    1.
    +128 = 1000 0000
    1s c = 0111 1111
                  +1
    2s c = 1000 0000
    -128 = 1000 0000
    128 and -128 binary value are same so here print ASCII value of +128

    2.
    +127 = ‭0111 1111‬
    1s c = 1000 0000
                  +1
    2s c = 1000 0001
    -127 = 1000 0001
    +129 = ‭1000 0001‬
    so here print the value of 129.
    */
    return 0;
}
