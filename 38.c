//Program to find largest number of 'n' numbers.
#include<stdio.h>
int main()
{
	int n,max=0,i;
	int *a;
	printf("Enter the value of N\t");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
		{
			max=a[i];
		}	
	}
	free(a);
	printf("The Largest Number among %d numbers are %d",n,max);
}
