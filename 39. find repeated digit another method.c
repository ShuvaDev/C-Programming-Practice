#include<stdio.h>
int main()
{
    int n,seen[10]={},rem,div;
    printf("Enter your digit: ");
    scanf("%d",&n);
    div=n;
    while(div!=0)
    {
        rem=div%10;
        if(seen[rem])
        {
            break;
        }
        seen[rem]=1;
        div=div/10;
    }
    if(div>0)
        printf("Yes repeated!");
    else
        printf("Not repeated!");
    return 0;
}
