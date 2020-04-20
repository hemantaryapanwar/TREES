#include <stdio.h>
int x=0;
  typedef struct node
 {
    int data;
    struct node *left;
    struct node *right;
 }Node;
int * create()
{
 int x;
 Node *newnode=(Node*)malloc(sizeof(Node));
 printf("Enter the data for the nodes(-1 for no data)");
 scanf("%d",&x);
    if(x==-1)
     {
     return NULL;
     }
      newnode->data=x;
      printf("Enter the left child data rooted at %d \n",newnode->data);
      newnode->left=create();
      printf("Enter the right child data rooted at %d\n",newnode->data);
      newnode->right=create();
      return newnode;
}
void traverse(Node *t)
{
     if(!t==NULL)
     {
       printf("Left child data is %d\n",t->data);
       traverse(t->left);
       t=t->right;
      }
      if(!t==NULL)
      {
       printf("Right child data is %d\n",t->data);
       traverse(t->right);
      }
}
int count_leaf(Node *t)
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
int main()
{
Node *root=create();
Node *t=root;
printf("Root child is %d\n ",t->data);
traverse(t);
printf(" is the order traversal \n\n" );
int p=count_leaf(t);
int y=count_NONleaf(t);
printf("Number of Leaf node=%d\nNumber of Nonleaf=%d",p,y);
return 0;
}
