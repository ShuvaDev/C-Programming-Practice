#include<stdio.h>
#include<string.h>
int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    return n*fact(n-1);
}
int calculate(char *str)
{
    int seen[10]={0};
    int count=1,i=0,j,k,flag=0;
    char ara[210],split[10][21];
    char *token;
    strcpy(ara,str);
    token=strtok(ara," ");
    while(token!=NULL)
    {
        strcpy(split[i],token);
        token=strtok(NULL," ");
        i++;
    }
    for(j=0;j<i;j++)
    {
        if(seen[j]==0)
        {
            for(k=j+1;k<i;k++)
            {
                if(strcmp(split[j],split[k])==0)
                {
                    seen[k]=1;
                    count++;
                }
            }
        }
    }
    return fact(i)/fact(count);
}
int main()
{
    int T,i,TW,j,pro=0;
    scanf("%d%*c",&T);
    char str[210];
    for(i=1;i<=T;i++)
    {
        gets(str);
        TW=calculate(str);
        printf("%d/%d\n",1,TW);
    }
    return 0;
}

