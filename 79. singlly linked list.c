#include<stdio.h>
#include<stdlib.h>

struct linked_list{
    int number;
    struct linked_list *next;
};
typedef struct linked_list node;
void create(node *myList)
{
    printf("Input a number. (Enter -99999 at end)\n");
    scanf("%d",&myList->number);
    if(myList->number==-99999)
    {
        myList->next=NULL;
    }else{
        myList->next=(node *)malloc(sizeof(node));
        create(myList->next);
    }
}
void print(node *myList)
{
    printf("%d ",myList->number);
    if(myList->number==-99999)
    {
        return;
    }
    print(myList->next);
}
int main()
{
    node *head;
    head=(node *)malloc(sizeof(node));
    create(head);
    printf("\n");
    print(head);
    printf("\n");
    return 0;
}

