#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node * left;
    struct node * right;
};

struct node* create(int v)
{
    struct node* newnode=malloc(sizeof(struct node));
    newnode->data=v;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
};

struct node* insertleft(struct node *root,int v)
{
    root->left=create(v);
    return root->left;
};
struct node * insertright(struct node *root,int v)
{
    root->right=create(v);
    return root->right;
};
void preorder(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node * root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d",root->data);
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
    printf("%d",root->data);
    inorder(root->right);
    }
}
int main()
{
    struct node* root=create(1);
    insertleft(root,1);
    insertright(root,2);
    insertleft(root->left,5);
    insertleft(root->left->left,5);
    insertright(root->left,6);
    insertleft(root->right,6);
    insertright(root->right,7);
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    inorder(root);

}
