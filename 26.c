//Add 'n' numbers using array.
#include<stdio.h>
int main()
{
	int n,i;
	int total=0;
	int *array;
	printf("Enter the value of N\t");
	scanf("%d",&n);
	array=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("Enter the value\t");
		scanf("%d",&array[i]);
		total+=array[i];	
	}
	printf("The Sum of %d number is \t%d",n,total);
	free(array);
}
