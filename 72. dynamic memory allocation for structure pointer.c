#include<stdio.h>
#include<stdlib.h>
typedef struct std{
    int roll;
    char name[50];
}student;
int main()
{
    int n;
    student *ptr;
    printf("Enter the number of student: ");
    scanf("%d",&n);
    // Memory allocate for structure type pointer.
    ptr=(student *)malloc(sizeof(student)*n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the details of student %d:\n",i+1);
        printf("Roll: ");
        scanf("%d%*c",&(ptr+i)->roll);
        printf("Name: ");
        scanf("%[^\n]%*c",(ptr+i)->name);
    }
    for(int i=0;i<n;i++)
    {
        printf("Details of student %d:\n",i+1);
        printf("Name: %s\n",(ptr+i)->name);
        printf("Roll: %d\n",(ptr+i)->roll);
    }
    free(ptr);
    return 0;
}

