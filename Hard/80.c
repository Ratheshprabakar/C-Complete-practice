//Program to arrange array numbers in ascending order
#include<stdio.h>
int main()
{
	int *array;
	int i,j,n,flag=1,temp;
	printf("Enter the number of elements\t");
	scanf("%d",&n);
	array=(int *)malloc(n*sizeof(int));
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	for(i=n-1;i>=0 && flag;i--)
	{
		flag=0;
		for(j=0;j<=i-1;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
				flag=1;
			}
		}
	}
	printf("The Elements in Ascending order\n");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
	free(array);
}
