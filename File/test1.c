#include<stdio.h>
int main()
{
    int t,len,i;
    char ara[50];
    scanf("%d",&t);
    while(t)
    {
        scanf("%s",ara);
        len=strlen(ara);
        for(i=1;i<len-1;i++)
        {
            if(ara[i]=='L' || ara[i]=='l')
            {
                ara[i]=ara[i-1];
            }
            else if(ara[i]=='R' || ara[i]=='r')
            {
                ara[i]=ara[i+1];
            }
        }
        printf("%s\n",ara);
        t--;
    }
    return 0;
}
