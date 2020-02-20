#include<stdio.h>
int main()
{
    /**
    instead of printing console, it store output on char buffer.
    **/
    char ara[100];
    sprintf(ara,"sum of %d and %d is: %d",10,20,10+20);
    printf("%s",ara);
    return 0;
}

