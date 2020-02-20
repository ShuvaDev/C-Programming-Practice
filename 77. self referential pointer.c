#include<stdio.h>
struct node{
    int x;
    struct node *next;
};
int main()
{
    struct node head,link;
    head.x=10;
    head.next=&link;

    link.x=20;
    link.next=NULL;

    printf("head.x : %d\n",head.x);
    printf("head.next->x: %d",head.next->x);
    return 0;
}
