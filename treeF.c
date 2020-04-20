#include<stdio.h>
#include<stdlib.h>
int x=0;
struct node{
    int data;
    struct node *left;
    struct node *right;
};
int create()
{
    struct node*newnode=(struct node *)malloc(sizeof(struct node));
    int x;
    printf("Enter data of node(-1 for return)=");
    scanf("%d",&x);
    if(x==-1)
        return NULL;
    newnode->data=x;
    printf("Enter value for adding at left node of %d\n",newnode->data);
    newnode->left=create();
    printf("Enter value for adding at right node of %d\n",newnode->data);
    newnode->right=create();
    return newnode;
}

int count_leaf(struct node *t)
{
    if(t==NULL)
        return 0;
    if((t->left==NULL)&&(t->right==NULL))
    return 1;
    else
     return(count_leaf(t->left)+count_leaf(t->right));
}
int count_NONleaf(struct node *t)
{
    if(t)
    {
        count_NONleaf(t->left);
        if((t->left!=NULL)||(t->right!=NULL))
        {
        return(++x);
        }
        count_NONleaf(t->right);
    }
}

void main()
{
    struct node *root=create();
    struct node *t=root;
    int p=count_leaf(t);
    int y=count_NONleaf(t);
    printf("Number of nodes=%d",p+y);
}
