#include<stdio.h>
 int main()
 {
  int i, j, count, temp, number[100];

   printf("How many numbers u are going to enter?: ");
   scanf("%d",&count);
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);
   for(i=1;i<count;i++)
    {
        temp=number[i];
        for(int j=0;j<i;j++)
        {
          if(temp<number[j])
          {
              temp=number[j+1];
              number[j+1]=number[j];
              number[j]=temp;
          }
        }
    }
   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
     printf(" %d ",number[i]);
   return 0;
}
