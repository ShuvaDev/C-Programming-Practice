#include<stdio.h>
int main()
{
    char c1='a';
    printf("%c\n",c1);
    char c2=65;
    printf("%c\n",c2);
    char ch1[]="I am shuva";
    printf("%s\n",ch1);
    printf("%c\n",ch1[0]);
    char ch2[]={'s','h','u','v','a','\0'};
    printf("%s\n",ch2);
    char ch3[5];
    ch3[0]='F';
    printf("%c\n",ch3[0]);
    return 0;
}

