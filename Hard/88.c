// Program to insert an element in array
#include<stdio.h>
int main()
{
	int *array;
	int position,n,element,i;
	printf("Enter the number of element\t");
	scanf("%d",&n);
	array=(int *)malloc((n+1)*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);	
	}
	printf("Enter the element\t");
	scanf("%d",&element);
	printf("Enter the position to insert\t");
	scanf("%d",&position);
	if(position>n)
		printf("\nPlease enter the valid position\n");
	else
	{
		for(i=n-1;i>=position-1;i--)
		{
			array[i+1]=array[i];	
		}
		array[position-1]=element;		
	}
	for(i=0;i<=n;i++)
	{
		printf("%d",array[i]);	
	}
}
