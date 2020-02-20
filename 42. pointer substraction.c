#include<stdio.h>
int main()
{
    /**
        If we add a constant value from a pointer then we calculate output with
        below formula:
            (address of n)+(sizeof data type)*constant value;
    **/

    /**
        If we substract from one pointer to pointer then we get distance between pointer.
        Formula: (address of x)-(address of y)/size of data type.
    **/
    int ara[]={1,2,3,4,5};
    int *ptr1=ara+1;
    int *ptr2=ara+4;
    printf("%d",ptr2-ptr1);
    return 0;
}
