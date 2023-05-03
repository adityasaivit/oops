#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
}; 
void count(struct node *h)
{
    struct node *p;
    int c=0;
    int j=0;
    while(j!=1)
    {
        if(h->link==NULL)
        {
            c++;
            j=1;
            break;

        }
        else
        {
            c++;
            h=h->link;
        }
        
    }
    printf(" %d\n",c);
    
}
void print(struct node *h)
{
    if(h==NULL)
    {
        printf("empty linked list");
    }
    else
    {
        int i=0;
        while(i!=1)
        {
            printf("%d\n",h->data);
            //printf("g");
            h=h->link;
            if(h->link==NULL)
            {
                printf("%d",h->data);
                
                i=1;
                break;
            }

        }
    }
}
void pos(struct node *r)
{
    int n;
    scanf("%d",&n);
    struct node *p;
    p=r;
    for(int i=1;i<n;i++)
    {
        p=p->link;
    }
    printf("     %d       ",p->data);
    struct node *add;
    add=malloc(sizeof(struct node));
    add->data=55;
    add->link=p->link;
    p->link=add;
}
struct node* begin(struct node *r)
{
    struct node *p;
    p=malloc(sizeof(struct node));
    p->link=r;
    p->data=100000;
    r=p;
    return p;
}
void delete(struct node *h)
{
    struct node *p;
    p=h;
    int j=0;
    while(j!=1)
    {
        p=h;
        h=h->link;
        if(h->link->link==NULL)
        {
            p->link=NULL;
            //printf("hello");
            //printf("%d",p->data);
            j=1;
            break;
        }
        

        

    }
}
int main()
{
    struct node *head;
    head=malloc(sizeof(struct node));
    head->data=10;
    head->link=NULL;
    struct node *current;
    current=malloc(sizeof(struct node));
    current->data=20;
    current->link=NULL;
    head->link=current;
    current=malloc(sizeof(struct node));
    current->data=30;
    current->link=NULL;
    head->link->link=current;
    printf("%d  %d  %d",head->data,head->link->data,current->data);
    count(head);
    print(head);
//adding a node at the end of a linked list
    struct node *temp;
    temp=malloc(sizeof(struct node));
    temp->data=100;
    current->link=temp;
    print(head);
    //to enter a node betweent two;
    //enter(head,1);
    pos(head);
    print(head);
    //add a node in the begining
    head=begin(head);
    print(head);
    delete(head);
    print(head);


}
