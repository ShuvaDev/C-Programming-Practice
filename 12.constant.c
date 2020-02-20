#include<stdio.h>
#define VALUE 10+10
/** Job of preprocessor(not compiler) to replace NAME with value **/
#define add(x,y) x+y // It's work same as a function.
#define greater(x,y) if(x>y)\
                        printf("%d is greater than %d!\n",x,y);\
                     else\
                        printf("%d is lesser than %d!\n",x,y);\

int main()
{
    //int VALUE = 20; We can't do this because it is same as int 10=20;
    printf("VALUE: %d\n",VALUE);
    printf("1. add(x,y): %d\n",add(10,40));
    printf("2. add(x,y): %d\n",5*add(10,40));
    /** Here answer is 90. Because 5*add(10,40) = 5*10+40 */
    greater(15,6);
    printf("Date: %s\n",__DATE__);
    printf("Time: %s\n",__TIME__);
    return 0;
}
