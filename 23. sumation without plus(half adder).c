#include<stdio.h>
int main()
{
    /**
     1.
              1
        7  -> 0111
        4  -> 0100
        11 <- 1011
        7^4      sum  : 0011
        (7&4)<<1 carry: (0100)<<1 = 1000
              11
    2. 7 ->   0111
       2 ->   0010
       9 <-   1001
       7^2       sum  : 0101
       (7&2)<<2  carry: 0010<<1 = 0100
       0101 ^ 0100 sum  : 0001
       0101 & 0100 carry: 0100<<1= 1000
    **/
    int a=10,b=10,sum,carry;
    while(b!=0)
    {
        sum=a^b;
        carry=(a&b)<<1;
        a=sum;
        b=carry;
    }
    printf("%d",a);
    return 0;
}
