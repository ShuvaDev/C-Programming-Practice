#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **a,total_class;
    printf("Enter the number of total class: ");
    scanf("%d",&total_class);
    int ara[total_class];
    // Allocate memory for total class..
    a=malloc(total_class*sizeof(int));

    // Allocate memory for total student..
    for(int i=0;i<total_class;i++)
    {
        printf("Enter the number of student for class %d: ",i+1);
        scanf("%d",&ara[i]);
        *(a+i)=malloc(ara[i]*sizeof(int));
    }
    // Input marks of all class
    for(int i=0;i<total_class;i++)
    {
        printf("Enter the marks for class %d: \n",i+1);
        for(int j=0;j<ara[i];j++)
        {
            scanf("%d",*(a+i)+j);
        }
    }
    //print marks of all class
    for(int i=0;i<total_class;i++)
    {
        printf("Marks of class %d: \n",i+1);
        for(int j=0;j<ara[i];j++)
        {
            printf("%d\n",*(*(a+i)+j));
        }
        puts("");
    }
    for(int i=0;i<total_class;i++)
    {
        free(a+i);
        free(*(a+i));
    }
    return 0;
}
