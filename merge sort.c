#include <stdio.h>
int b[10];
int a[100];
void merging(int low, int mid, int high)
{
   int l1, l2, i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }

   while(l1 <= mid)
      b[i++] = a[l1++];

   while(l2 <= high)
      b[i++] = a[l2++];

   for(i = low; i <= high; i++)
      a[i] = b[i];
}

void sort(int low, int high)
{
   int mid;
   if(low < high)
  {
      mid = (low + high) / 2;
      sort(low, mid);
      sort(mid+1, high);
      merging(low, mid, high);
   }
   else
    {
      return;
    }
}

int main()
 {
   int size;
   printf("Enter size of array=");
   scanf("%d",&size);
   printf("Enter List before sorting\n");
   for(int i = 0; i <= size-1; i++)
      scanf("%d",&a[i]);
   sort(0, size-1);
    for(int j = 0; j <= size-1; j++)
      printf("%d ", a[j]);
}
