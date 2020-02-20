#include<stdio.h>
extern int a;// We cannot use it.
extern int b=20;
int c=10;
int rr=10;
int main()
{

    /**
     1.We can use automatic variable inside a function.
     2.We can use register variable inside a function also.
     3.We can not find address of register variable.
     4.If we declare a variable as a extern and if we want to use it we must be
     initialized this variable of outside function.
    */
    auto int x=10;
    register int y=20;
    //printf("%d",&y); // it is not possible.
    extern int c;
    extern int c;// Multiple declaration possible.
    extern int c;
    //extern int d=10; // Here shown an error.
    extern int e;// We cannot use it.
    printf("%d\n",b);
    printf("%d",c);
    return 0;
}


