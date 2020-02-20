#include<stdio.h>
#include<string.h>
int main()
{
    // strcpy is use to copy a string by pointed by source(including NULL character)
    // to the destination.
    // strcpy returns the pointer to the first character of the string which is copied
    // to the destination.
    /** If the length of str2 is greater than the length of str1 then it will be an
    undefined behaviour.
    To avoid this we can use strncpy();*/
    char str1[10];
    char str2[6]="Hello";
    char str3[10];
    char str4[4];
    printf("%s\n",strcpy(str3,strcpy(str1,str2)));
    /**
        strncpy will leave the str4(destination) without terminating a null character
        If the size str2(source) is greater than or equal str4(destination).
    **/
    strncpy(str4,str2,sizeof(str4));
    str4[sizeof(str4)-1]='\0';
    printf("%s",str4);
    return 0;
}
