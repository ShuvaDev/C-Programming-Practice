#include<stdio.h>
int main()
{
    int n,rem,div,count=0,temp;
    printf("Enter your digit: ");
    scanf("%d",&n);
    div=n;
    while(div!=0)
    {
        rem=div%10;
        count++;
        div=div/10;
    }
    div=n,temp=count;
    int ara[count],i=count-1;
    while(count!=0)
    {
        rem=div%10;
        ara[i]=rem;
        div=div/10;
        count--;
        i--;
    }
    int x,c=0;
    for(int i=0;i<temp;i++)
    {
        x=ara[i];
        for(int j=i+1;j<temp;j++)
        {
            if(x==ara[j])
            {
                c=1;
                break;
            }
        }
        if(c==1)
        {
            break;
        }
    }
    if(c==1)
    {
        printf("Yes repeated!");
    }else{
        printf("No! Not repeated!");
    }
    return 0;
}
