#include<stdio.h>
struct linked_list{
    int data;
    struct linked_list* next;
};
typedef struct linked_list Node;
Node *head=NULL;
int main()
{
    int data;
    while(1)
    {
        printf("Input your data(Enter -1 for exit)\n");
        scanf("%d",&data);
        if(data==-1)
            return;
        create_node(data);
    }
    traverse();
    return 0;
}
void create_node(int data)
{
    Node *newNode=(Node *)malloc(sizeof(Node));
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    newNode->next=NULL;
    newNode->data=data;
    append(newNode);
}
void append(Node * newNode)
{
    Node *myList=head;
    while(myList->next!=NULL)
    {
        myList=myList->next;
    }
    myList->next=newNode;
}
void traverse()
{
    Node *myList=head;
    while(myList!=NULL)
    {
        printf("%d ",myList->data);
        myList=myList->next;
    }
}
