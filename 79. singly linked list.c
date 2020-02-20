#include<stdio.h>
#include<stdlib.h>
struct linked_list{
    int data;
    struct linked_list *next;
};
typedef struct linked_list node;
node *head=NULL,*last=NULL;
void create_linked_list();
void insert_at_last(int);
void print_linked_list(node*);
void insert_at_first(int);
void insert_at_after(int,int);
void search_item(int);
void delete_item(int);
int main()
{
    int val,key;
    printf("Create linked list:\n");
    create_linked_list();
    printf("Print linked list: \n");
    print_linked_list(head);
/**
    printf("\nInsert new item at first\n");
    scanf("%d",&val);
    insert_at_first(val);
    printf("Print linked list: \n");
    print_linked_list(head);

    printf("\nEnter a KEY (existing item of List), after that you want to insert a value\n");
    scanf("%d",&key);
    printf("\nInsert new item after %d KEY\n", key);
    scanf("%d", &val);
    insert_at_after(key,val);
    print_linked_list(head);
    printf("\nEnter an item to search it from List\n");
    scanf("%d", &val);
    search_item(val);
**/
    printf("\nEnter a value, which you want to delete from list\n");
    scanf("%d", &val);
    delete_item(val);
    print_linked_list(head);
    return 0;
}
void create_linked_list()
{
    int value;
    while(1)
    {
        printf("Input a number.(Enter -1 for exit)\n");
        scanf("%d",&value);
        if(value==-1)
            break;
        insert_at_last(value);
    }
}
void insert_at_last(int value)
{
    node *temp_node=malloc(sizeof(node));
    temp_node->data=value;
    temp_node->next=NULL;
    if(head==NULL)
    {
        last=temp_node;
        head=temp_node;
    }else{
        last->next=temp_node;
        last=temp_node;
    }
}
void insert_at_first(int value)
{
    node *temp_node=(node *)malloc(sizeof(node));
    temp_node->data=value;
    temp_node->next=head;
    head=temp_node;
}
void insert_at_after(int key,int val)
{
    node *myList=head;
    int flag=0;
    while(myList!=NULL)
    {
        if(myList->data==key)
        {
            node *newNode=malloc(sizeof(node));
            newNode->data=val;
            newNode->next=myList->next;
            myList->next=newNode;
            flag=1;
            break;
        }else{
            myList=myList->next;
        }
    }
    if(flag==0)
    {
        printf("Key not found!\n");
    }
}
void print_linked_list(node * myList)
{
    printf("%d ",myList->data);
    if(myList->next!=NULL)
    {
        print_linked_list(myList->next);
    }
}
void search_item(int val)
{
    node *searchNode=head;
    int flag=0;
    while(searchNode!=NULL)
    {
        if(searchNode->data==val)
        {
            printf("%d is present in this list. Memory address is %d\n", val, searchNode);
            flag=1;
            break;
        }else{
            searchNode=searchNode->next;
        }
    }
    if(flag==0)
    {
        printf("Item not found!\n");
    }
}
void delete_item(int value)
{
    node *myList=head;node *previous=NULL;
    int flag=0;
    while(myList!=NULL)
    {
        if(myList->data==value)
        {
            if(previous==NULL)
                head=myList->next;
            else
                previous->next=myList->next;
            printf("%d deleted successfully!\n",value);
            flag=1;
            break;
        }
        previous=myList;
        myList=myList->next;
    }
    if(flag==0)
    {
        printf("Key not found!\n");
    }
}
