#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int l1,l2,max;
    printf("Enter your string: ");
    gets(s1);
    printf("Searching string: ");
    gets(s2);
    l1=strlen(s1);
    l2=strlen(s2);
    max=l1-l2;
    int i;
    for(i=0;i<=max;i++)
    {
        if(strncmp(s1+i,s2,l2)==0)
        {
            break;
        }
    }
    if(i<=max)
    {
        for(int j=i;j<(i+l2);j++)
        {
            s1[j]='a';
        }
        printf("%s",s1);
    }else{
        printf("Invalid input!");
    }
    return 0;
}
