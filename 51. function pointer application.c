#include<stdio.h>
float add(float n1,float n2)
{
    printf("%.2f",n1+n2);
}
float sub(float n1,float n2)
{
    printf("%.2f",n1-n2);
}
int main()
{
    char ch;
    float (*fun[2])(float,float)={add,sub};
    printf("Enter '+' for sumation and enter '-' for substraction: ");
    scanf("%c",&ch);
    switch(ch)
    {
    case '+':
        fun[0](10.5,20.5);
        break;
    case '-':
        fun[1](20.5,30.5);
        break;
    }
    return 0;
}
