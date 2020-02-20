#include<stdio.h>
#define x2 20;
int var;
static int count1;
int increament1();
int increament2();
//count1=x2; -> We can't reassign static variable with any constant and any variable.
int main()
{
    /**
        Note:
            1. If we declare a static variable then it automatically
            initialized with 0.
            2. If we declare a static variable inside a function then
            it is not destroyed after completion function task.
            3. If we declare a static variable in another file we can't
            access it using external variable.
            4. We can't initialize a static variable with another variable.
            We can initialize a static variable with constant.
    **/
    int x1=10;
    //static int x=x1; -> It can't be possible.
    static int y=x2;
    int c1,c2;
    extern int count1;
    c1=increament1();
    c1=increament1();
    c1=increament1();
    c2=increament2();
    c2=increament2();
    c2=increament2();
    printf("increament1() = %d\n",count1+c1);
    printf("increament2() = %d",c2);
    return 0;
}
int increament1()
{
    count1+=1;
    return count1;
}
int increament2()
{
    static int count2;
    count2+=1;
    return count2;
}
