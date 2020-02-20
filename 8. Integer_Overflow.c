#include<stdio.h>
#include<limits.h>
int main()
{
    // signed integer
    printf("Signed short min: %hd\n",SHRT_MIN);
    printf("Signed short max: %hd\n",SHRT_MAX);
    /** signed int range:   -(2^n-1) to +(2^n-1 - 1)
        because my computer architecture follow 2s complement method.*/
    /** unsigned int range: (0 to 2^n - 1) */
    printf("Unsigned short min: %d\n",0);
    printf("Unsigned short max: %hu\n\n",USHRT_MAX);
    short int a=32770;
    /**
        32770         -> 1000 0000 0000 0010‬
        1s complement -> 0111 1111 1111 1101
                                          +1
        2s complement -> 0111 1111 1111 1110 -> -32766
        |MAIN|
        32766         -> 0111 1111 1111 1110
        1s complement -> 1000 0000 0000 0001
                                          +1
        2s complement -> 1000 0000 0000 0010
        Binary value of 32770 and -32766 is same so here we see -32766

    */
    printf("signed positive number overflow: %hd\n",a);
    short int no=-32770;
    /**
      -32770    ->   0111 1111 1111 1110
      +32766    ->   0111 1111 1111 1110
    */
    printf("signed negative number overflow: %hd\n",no);
    unsigned short int b=-2;
    /**
        2             -> 0000 0000 0000 0010
        1s complement -> 1111 1111 1111 1101
                                          +1
        2s complement -> 1111 1111 1111 1110 -> -2

        65534         -> 1111 1111 1111 1110
        Here binary value of -2 and 65534 are same so here we see 65534
    */
    printf("unsigned negative number: %hu\n",b);
    unsigned short int bb= 65540;
    /**
        65540             -> ‭0001 0000 0000 0000 0100‬
        Because of 16 bit ->      0000 0000 0000 0100 ->4

    */
    printf("unsigned negative number: %hu\n",bb);
    return 0;
}
