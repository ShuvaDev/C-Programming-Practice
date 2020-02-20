#include<stdio.h>
int main()
{
    /** Find even and odd: 4 method **/

    /** Method 1: using division operator. **/
    int n;
    printf("Enter your fist number: ");
    scanf("%d",&n);
    printf("Method 1: ");
    if((n/2)*2==n)
    {
        printf("Even\n");
    }else{
        printf("Odd\n");
    }
    /** Using bitwise & operator **/
    printf("Method 2: ");
    if((n & 1) == 0){
        printf("Even\n");
    }else{
        printf("Odd\n");
    }
    /** Using left and right shift << >> operator **/
    printf("Method 3: ");
    if((n>>1)<<1 == n){
        printf("Even\n");
    }else{
        printf("Odd\n");
    }
    /** Using xor ^ operator **/
    printf("Method 4: ");
    if((n^1)<n){
        printf("Odd\n");
    }else{
        printf("Even\n");
    }
    /** Using & operator **/
    printf("Method 5: ");
    if((n&-n)==1){
        printf("Odd\n");
    }else{
        printf("Even\n");
    }
    return 0;

}
