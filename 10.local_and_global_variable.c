#include<stdio.h>
int var=10;
void fun();
int main()
{
    int var=20;
    {
        int var=30;
        {
            int var=40;
            printf("%d\n",var);
        }
        printf("%d\n",var);
    }
    printf("%d\n",var);
    fun();
    return 0;
}
void fun(){
    printf("%d\n",var);
}
