#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *link;
}*head;
void createnode(int n)
{
 head=(struct node *)malloc(sizeof(struct node));
 int data;
 printf("Enter head data=");
 scanf("%d",&data);
 head->data=data;
 head->link=NULL;
 struct node *temp=(struct node *)malloc(sizeof(struct node));
 temp=head;
 struct node *newnode;
 for(int a=0;a<n-1;a++)
 {
  newnode=(struct node *)malloc(sizeof(struct node));
  printf("Enter node data=");
  scanf("%d",&data);
  newnode->data=data;
  newnode->link=NULL;
  temp->link=newnode;
  temp=temp->link;
 }
}
void traverse()
{
 struct node *temp=(struct node *)malloc(sizeof(struct node));
 temp=head;
 while(temp)
 {
  printf("Data you entered=%d\n",temp->data);
  temp=temp->link;
 }
}
/*
void begin()
{
  struct node *temp=(struct node *)malloc(sizeof(struct node));
  struct node *begin=(struct node *)malloc(sizeof(struct node));
  printf("\nEnter data to add before head=");
  scanf("%d",&begin->data);
  begin->link=head;
  head=begin;
}
 void end()
{
 struct node *end=(struct node *)malloc(sizeof(struct node));
 struct node *temp=(struct node *)malloc(sizeof(struct node));
 printf("Enter data to add at end=");
 scanf("%d",&end->data);
 end->link=NULL;
 temp=head;
 while(temp->link!=NULL)
 {
 temp=temp->link;
 }
 temp->link=end;
}*/
void delete()
{
 struct node *temp=(struct node *)malloc(sizeof(struct node));
 temp=head;
 int del;
 printf("Enter data of the which you want to delete=");
 scanf("%d",&del);
 while(temp->data)
 {
     if(head->data==del)
     {
         head=temp->link;
         free(temp);
         break;
     }
     else if(temp->link->data==del)
     {
         temp->link=temp->link->link;
         break;
     }
      temp=temp->link;
 }
}
void main()
{
 int n;
 printf("Enter number of nodes in list=");
 scanf("%d",&n);
 createnode(n);
 traverse();
 delete();
 traverse();
}
