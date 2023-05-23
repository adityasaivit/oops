#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node* head;
    struct node *one;
    struct node *two;

    one=malloc(sizeof(struct node));
    two=malloc(sizeof(struct node));
    head=one;
    one->data=100;
    one->next=two;
    two->data=200;
    two->next=NULL;
    printf("%d\n",one->data);
    printf("%d\n",one->next->data);
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    newnode->data=300;
    newnode->next=one;
    head=newnode;
    for(int i=1;i<=3;i++)
    {
        printf("%d\n",newnode->data);
        newnode=newnode->next;

    }


}
