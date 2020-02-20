#include<stdio.h>
#include<stdlib.h>
struct linked_list{
    int data;
    struct linked_list *previous;
    struct linked_list *next;
};
typedef struct linked_list node;
void create_node(int);
void print_forward(void);
void print_reverse(void);
void insert_last(void);
void insert_first(void);
void insert_middle(int,int);
// Head represent first node and Tail represent last node.
node *head=NULL;node *tail=NULL;
int main()
{
    int val,pos;
    while(1)
    {
        printf("Input your data.(Enter -1 for exit).\n");
        scanf("%d",&val);
        if(val==-1)
            break;
        create_node(val);
    }
    /**
    printf("Print node with forward direction: \n");
    print_forward();
    printf("\nPrint node with reverse direction: \n");
    print_reverse();
    printf("\nInsert at last position: \n");
    insert_first();
    printf("Print node with forward direction: \n");
    print_forward();
    printf("\nPrint node with reverse direction: \n");
    print_reverse();
    **/
    printf("Enter your position(1-n): ");
    scanf("%d",&pos);
    printf("Enter your value: ");
    scanf("%d",&val);
    insert_middle(pos,val);
    printf("Print node with forward direction: \n");
    print_forward();
    return 0;
}
void create_node(int val)
{
    node *newNode=(node *)malloc(sizeof(node));
    newNode->data=val;
    newNode->next=NULL;
    if(head==NULL)
    {
        head=newNode;
        newNode->previous=NULL;
        tail=head;
    }else{
        tail->next=newNode;
        newNode->previous=tail;
        tail=newNode;
    }
}
void print_forward()
{
    node *myNode=head;
    while(myNode!=NULL)
    {
        printf("%d ",myNode->data);
        myNode=myNode->next;
    }
}
void print_reverse()
{
    node *myNode=tail;
    while(myNode!=NULL)
    {
        printf("%d ",myNode->data);
        myNode=myNode->previous;
    }
}
void insert_last()
{
    int val;
    printf("Enter your value: ");
    scanf("%d",&val);
    node *newNode=(node *)malloc(sizeof(node));
    newNode->data=val;
    newNode->next=NULL;
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        newNode->previous=NULL;
    }else{
        tail->next=newNode;
        newNode->previous=tail;
        tail=newNode;
    }
}
void insert_first()
{
    int val;
    printf("Enter your value: ");
    scanf("%d",&val);
    node *newNode=(node *)malloc(sizeof(node));
    newNode->data=val;
    newNode->next=NULL;
    newNode->previous=NULL;
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }else{
        newNode->next=head;
        head->previous=newNode;
        head=newNode;
    }
}
void insert_middle(int pos,int val)
{
    int i=1;
    node *myNode=head;
    node *newNode=(node *)malloc(sizeof(node));
    newNode->data=val;
    newNode->next=NULL;
    newNode->previous=NULL;
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }else{
        while(i<pos && myNode!=NULL)
        {
            myNode=myNode->next;
            i++;
        }
        newNode->next=myNode->next;
        newNode->previous=myNode->previous;
    }
}
