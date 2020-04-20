#include<stdio.h>
void main()
{
        int temp;
	int a[5];
	printf("Enter numbers::");
	for(int q=0;q<=4;q++)
	{
		scanf("%d",&a[q]);
	}
	for(int b=0;b<=4;b++)
	{
		for(int c=0;c<=4;c++)
		{
			if(a[b]<a[c])
			{
				temp=a[b];
				a[b]=a[c];
				a[c]=temp;
			}
		}
	}
	for(int d=0;d<=4;d++)
	{
		printf("%d ",a[d]);
	}
}
