#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct adjlist
{
    struct node* head;
};
struct graph
{
    int v;
    struct adjlist* arr;
};
struct node* create(int v)
{
    struct node* newnode=malloc(sizeof(struct node));
    newnode->data=v;
    newnode->next=NULL;
    return newnode;
}
struct graph* cretegraph(int num)
{
    struct graph* Graph=malloc(sizeof(struct graph));
    Graph->v=num;
    Graph->arr=malloc(num*sizeof(struct graph));
    for(int i=0;i<num;i++)
    {
        Graph->arr[i].head=NULL;
    }
    return Graph;
}
void addedge(struct graph * G,int src,int dest)
{
    struct node* check=NULL;
    struct node* newnode=create(dest);
    if(G->arr[src].head==NULL)
    {
        newnode->next=G->arr[src].head;
        G->arr[src].head=newnode;
    }
    else
    {
        check=G->arr[src].head;
        while(check->next!=NULL)
        {
            check=check->next;
        }
        check->next=newnode;
    }
    newnode=create(src);
    if(G->arr[dest].head==NULL)
    {
        newnode->next=G->arr[dest].head;
        G->arr[dest].head=newnode;

    }
    else
    {
        check=G->arr[dest].head;
        while(check->next!=NULL)
        {
            check=check->next;
        }
        check->next=newnode;
    }
}
void print(struct graph* G)
{
    for(int i=0;i<G->v;i++)
    {
        struct node* ptr=G->arr[i].head;
        while(ptr!=NULL)
        {
            printf("->%d",ptr->data);
            ptr=ptr->next;
        }
        printf("\n");
    }
}

int main()
{
    int v=5;
    struct graph* G=cretegraph(v);
    addedge(G,0,1);
    addedge(G,0,2);
    addedge(G,1,2);
    print(G);

}
