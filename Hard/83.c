//Program to delete the number of elements in an array
#include<stdio.h>
int main()
{
	int *array;
	int i,j,n,position;
	printf("Enter the size of the element\t");
	scanf("%d",&n);
	array=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Enter the position which you want to delete\t");
	scanf("%d",&position);
	if(position>(n+1))
	{
		printf("Please enter the valid position\t");
	}
	else
	{
		for(i=position-1;i<n;i++)
		{
			array[i]=-99;
		}
	}
	for(i=0;i<n-position;i++)
	{
		if(array[i]!=-99)
			printf("%d\n",array[i]);
	}
	free(array);
}
