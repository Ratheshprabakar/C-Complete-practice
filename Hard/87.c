//Program to reverse the array
#include<stdio.h>
int main()
{
	int *array;
	int i,j,n;
	printf("Enter the size of the array\t");
	scanf("%d",&n);
	array=(int *)malloc(n* sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);	
	}
	for(i=0,j=n-1;i<n && j>=0;i++,j--)
	{
		if(i<j)
		{
		array[i]=array[i]^array[j];
		array[j]=array[i]^array[j];
		array[i]=array[i]^array[j];
		}	
		else
			break;
	}
	printf("The Reversed Array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);	
	}
	free(array);
}
