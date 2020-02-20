#include<stdio.h>
int main()
{
    int a[]={1,2,3};
    int (*ap)[3]=&a;/** This means ap is a pointer thats point an integer array which size is 3 **/
    for(int i=0;i<3;i++)
    {
        printf("%d\t",*(*ap+i));
    }
    return 0;
}
