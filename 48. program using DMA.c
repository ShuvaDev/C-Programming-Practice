#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ara[5],n,*ptr,ara1[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter the number of student for class %d: ",i+1);
        scanf("%d",&n);
        ara1[i]=n;
        ptr=malloc(n*sizeof(int));
        ara[i]=ptr;
        if(ara[i]==NULL)
        {
            printf("memory allocation failed!\n");
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("Enter marks for %d student and class %d: \n",ara1[i],i+1);
        for(int j=0;j<ara1[i];j++)
        {
            scanf("%d",(*(ara+i))+j);
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("Marks of class %d: \n",i+1);
        for(int j=0;j<ara1[i];j++)
        {
            printf("%d\t",*((*(ara+i))+j));
        }
        printf("\n");
    }
    for(int i=0;i<5;i++)
    {
        free(ara[i]);
    }
    return 0;
}

