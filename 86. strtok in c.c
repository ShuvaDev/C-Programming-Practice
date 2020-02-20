#include<stdio.h>
#include<string.h>
int main()
{
    char source[]="I am s.r. shuva dev";
    char *tok=strtok(source," ");
    while(tok!=NULL)
    {
        printf("%s\n",tok);
        tok=strtok(NULL," ");
    }
    return 0;
}

