#include<stdio.h>
int main()
{
    /**
        If we declare an array and initialize together then we can't use variable
        as an array size. But we can use a macro.
        Ex: int a=10;
            int ara[a]; -> It possible .
            int ara[a]={1,2} -> It is not possible.
    **/
    /** if we declare a array like this, then compiler automatically initialized rest
    index with zero **/
    int ara[5]={1};
    printf("%d\t%d\n",ara[1],ara[2]);

    /** if we want to declare an array like this int ara={1,0,0,0,2,3,0,0,0,0}; then
    we use designated initialization. And each number in the square brackets is said
    to be designator. **/
    int ara1[10]={[0]=1,[4]=2,[5]=3};
    //or int ara1[10]={[4]=2,[0]=1,[5]=3};
    for(int i=0;i<10;i++)
    {
        printf("%d\t",ara1[i]);
    }

    /** If we don't mention array size in designated initialization then compiler
    will deduce the length of the array from the largest designator in list. **/
    int ara2[]={[5]=2,[25]=3};
    printf("\nsize of ara2 is: %d!\n",sizeof(ara2));

    /** But if there is a clash, then designated will win. **/
    int ara3[]={[2]=4,1,2,3,[6]=45};
    printf("ara3[2]: %d\n",ara3[2]);
    return 0;
}
