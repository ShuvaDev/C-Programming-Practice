#include<stdio.h>
int main()
{
    /** signed short */
    short int a=10;
    //or (signed short int a=10;)
    //or (short a=10;)
    printf("signed short: %hd %hi\n",a,a);
    //or (printf("signed short: %hi\n",a);)
    /** unsigned short */
    unsigned short int b=20;
    printf("unsigned short: %hu\n",b);
    /** signed integer */
    int c=30;
    printf("signed integer: %d %i\n",c,c);
    /** unsigned integer */
    unsigned int d=40u;
    printf("unsigned integer: %u\n",d);
    /** signed long integer */
    long int e=50L;
    // or long int e=50l;
    printf("long integer: %ld %li\n",e,e);
    /** unsigned long integer */
    unsigned long int f=60ul;
    printf("unsigned long integer: %lu %lu\n",f,f);
    /** signed long long integer */
    long long int g=70ll;
    printf("long integer: %lld %lli\n",g,g);
    /** unsigned long long integer */
    unsigned long long int h=80ull;
    printf("unsigned long integer: %llu\n",h);

    return 0;
}

