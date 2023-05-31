#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *right;
    struct node *left;
};

struct node * create(int v)
{
    struct node* newnode=malloc(sizeof(struct node));
    newnode->data=v;
    printf("created");
    newnode->right=NULL;
    newnode->left=NULL;
    return newnode;

}
struct node* insertleft(struct node* root,int v)
{
    root->left=create(v);
    return root->left;
}
struct node* insertright(struct node* root,int v)
{
    root->right=create(v);
    return root->right;
}
void preorder(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        printf("%d->",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d->",root->data);
    }
}
void inorder(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        inorder(root->left);
        printf("%d->",root->data);
        inorder(root->right);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int x;
    scanf("%d",&x);
    struct node* root=create(x);
    //construction of binary tree
    for(int i=1;i<n;i++)
    {
        struct node* root1=root;
        scanf("%d",&x);
        while(1)
        {
            if(root1->data>x)
            {
                if(root1->left==NULL)
                {
                    insertleft(root1,x);
                    printf("yup");
                    break;
                }
                else
                {
                    root1=root1->left;
                }
            }
            else if(root1->data<x)
            {
                if(root1->right==NULL)
                {
                    insertright(root1,x);
                    printf("yupr");
                    break;

                }
                else
                {
                    root1=root1->right;
                }
            }
        }
    }
    preorder(root);
    postorder(root);
    inorder(root);


}
