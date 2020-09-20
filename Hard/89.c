//Program to sort array using Insertion sort
#include<stdio.h>
int main()
{
	int n,*array,i,j,flag=1;
	printf("Enter number of elements\t");
	scanf("%d",&n);
	array=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	for(i=n-1;i>=0 && flag;i--)
	{
		flag=0;
		for(j=0;j<i;j++)
		{
			if(array[j]>array[j+1])
			{
				flag=1;
				array[j]=array[j]^array[j+1];
				array[j+1]=array[j]^array[j+1];
				array[j]=array[j]^array[j+1];	
			}
		}
	}
	printf("The Sorted Array using inserting sort is \n");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
	free(array);
}
