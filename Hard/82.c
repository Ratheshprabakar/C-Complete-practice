//Program to delete an element from array
#include<stdio.h>
int main()
{
	int *array;
	int i,j,n,element,flag=0;
	printf("Enter the number of element\t");
	scanf("%d",&n);
	array=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Enter the element you want to delete");
	scanf("%d",&element);
	for(i=0;i<n;i++)
	{
		if(array[i]==element)
		{
			for(j=i;j<n;j++)
			{
				array[j]=array[j+1];
			}
			//break;
			flag++;
		}
	}
	if(flag==0)
	{
		printf("Oops, The element is not found in the array");
	}
	else
	{
		for(i=0;i<n-flag;i++)
		{
			printf("%d",array[i]);
		}
	}
	free(array);
	return 0;
}
