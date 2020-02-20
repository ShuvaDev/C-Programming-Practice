#include<stdio.h>
int main()
{
    /**
        Note:
            1. You are not allowed to add duplicate case.
            2. Only those expressions are allowed in switch which result is integral cons. value.
            3. Variable expressions are not allowed in case label. Although macros are allowed.
            4. Default can be placed anywhere inside switch. It will still get evaluated if no match
               is found.
    **/
    int x=100;
    switch(10)
    {
    case 10+10:
        printf("20");
        break;
    //case 10+10:
        //printf("It is not possible!");
    default:
        printf("OOPS!");
    case 2:
    case 10:
        printf("10");
    case x:

    }
    return 0;
}
