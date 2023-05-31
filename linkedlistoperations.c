#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
   
};
struct node* create(struct node*root,int v)
{
    while(root->next!=NULL)
    {
        root=root->next;
    }
    struct node* newnode=malloc(sizeof(struct node));
    newnode->data=v;
    printf("create");
    root->next=newnode;
    newnode->next=NULL;
    return newnode;
}
void display(struct node* root)
{
    while(root!=NULL)
    {
        printf("%d",root->data);
        root=root->next;
    }
}
struct node* insertfirst(struct node*root,int v)
{
    struct node* newnode=malloc(sizeof(struct node));
    newnode->data=v;
    newnode->next=root;
    root=newnode;
    return root;
    
}
void deletelast(struct node* head)
{
    while(head->next->next!=NULL)
    {
        head=head->next;
    }
    head->next=NULL;
}
struct node* deletefirst(struct node* head)
{
    head=head->next;
    return head;
}
void insertbetween(struct node* head,int n2,int v)
{
    for(int i=1;i<n2;i++)
    {
        head=head->next;
    }
    struct node* newnode=malloc(sizeof(struct node));
    newnode->data=v;
    newnode->next=head->next;
    head->next=newnode;
}
void deletebetween(struct node* head,int n2)
{
    for(int i=1;i<n2-1;i++)
    {
        head=head->next;
    }
    head->next=head->next->next;

}
int count(struct node* head)
{
    int c=0;
    while(head!=NULL)
    {
        c++;
        head=head->next;
    }
    return c;
}
void sort(struct node* head,int num)
{
    for(int i=1;i<=num;i++)
    {
        struct node* ptr=head;
        for(int j=1;j<=num;j++)
        {
            if(ptr->next!=NULL)
            {
                if(ptr->data>ptr->next->data)
                {
                    int temp=ptr->next->data;
                    ptr->next->data=ptr->data;
                    ptr->data=temp;
                    ptr=ptr->next;
                }   
            }
            ptr=ptr->next;
        }
    }
}
int main()
{
    struct node* node1=malloc(sizeof(struct node));
    int x;
    scanf("%d",&x);
    node1->data=x;
    node1->next=NULL;
    int n;
    struct node* head=node1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        create(head,x);
    }
    head=insertfirst(head,1);
    display(head);
    deletelast(head);
    //pirntf("\n");
    printf("\n");
    display(head);
    head=deletefirst(head);
    display(head);
    //insertat a particular position
    int n1;
    scanf("%d",&n1);
    insertbetween(head,2,100);printf("\n");
    display(head);
    scanf("%d",&n1);
    deletebetween(head,n1);
    display(head);
    int num=count(head);
    printf("     %d     ",count(head));
    sort(head,num);
    display(head);

}
