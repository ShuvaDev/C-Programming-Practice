#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    // First index of argv[0] contain command...
    int sum=0,val;
    printf("Value of argv[0]: %s\n",argv[0]);
    for(int i=1;i<argc;i++)
    {
        val=atoi(argv[i]);
        printf("%d + ",val);
        sum=sum+val;
    }
    printf("\b\b= %d",sum);
    return 0;
}


