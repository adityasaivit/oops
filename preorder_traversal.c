//tree traversals
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;

};
struct node* create(int v)
{
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=v;
    newnode->left=NULL;
    newnode->right=NULL;
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
void preorder(struct node*root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        printf("%d->",root->data);
        preorder(root->right);
        preorder(root->left);
    }
}
int main()
{
    struct node* root=create(40);
   /*
    insertleft(root,7);
    insertright(root,9);
    insertleft(root->left,2);
    insertright(root->left,6);
    insertleft(root->left->right,5);
    insertright(root->left->right,11);
    preorder(root);
    insertright(root->right,9);
    insertleft(root->right->right,5);
    printf("\n");
    preorder(root);
    */
   //insertion or construction of binary tree
   
   int n;
   
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
        struct node*root1=root;
        int x;
        scanf("%d",&x);
        int y=1;
        for(y=1;y>0;y++)
        {
            if(root1->data<x)
            {
                if(root1->left==NULL)
                {
                    insertleft(root1,x);
                    //printf("hl");
                    break;
                }
                else
                {
                    root1=root1->left;
                    //break;
                }
            
            }
            else if(root1->data>x)
            {
                if(root1->right==NULL)
                {
                    insertright(root1,x);
                    break;
                }
                else
                {
                    root1=root1->right;
                    //break;
                }
            }
        }
        preorder(root);
   }
    
    


}
