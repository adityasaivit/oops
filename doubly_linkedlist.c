#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void newnode(struct node *head)
{
    struct node*ptr;
    //struct node*ptr1;
    ptr=head;
    while(ptr->next!=NULL)
    {
        
        ptr=ptr->next;

    }
    struct node *newn;
    newn=malloc(sizeof(struct node));
    newn->data=100;
    ptr->next=newn;
    newn->prev=ptr;

}
void show(struct node *head)
{
    struct node *ptr;
    ptr=head;
    while(ptr->next!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    while(ptr->prev!=NULL)
    {
        //printf("hello");
        printf("%d",ptr->data);
        ptr=ptr->prev;
    }
    
}
int main()
{
    struct node *he;
    struct node *new;
    new=malloc(sizeof(struct node));
    new->data=100;
    new->next=NULL;
    new->prev=NULL;
    he=new;
    for(int i=1;i<=100;i++)
    {
        newnode(he);
    }
    show(he);

}
