#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="Shuva ";
    char s2[10]="Dev";
    strcat(s1,s2);
    printf("%s\n",s1);
    // When s2(destination) is less than s1(source) then it will be an undefined behaviour.
    // So avoid this we use strncat();
    char s3[10]="Bangla";
    char s4[]="Desh";
    strncat(s3,s4,sizeof(s3)-strlen(s3)-1);
    printf("%s",s3);
    return 0;
}
