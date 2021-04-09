/*Alternate sorting: Given an array of integers, rearrange the array in such a way that the first element is first maximum and second element is first minimum and repeat the same sorting for the subsequent pairs

first element - first maximum
second element - first minimum
third element - second maximum
fourth element - second minimum ....

Example:
Input : {1, 2, 3, 4, 5, 6, 7}
Output : {7, 1, 6, 2, 5, 3, 4}*/
#include<stdio.h>
int main()
{
	int n,*input_array,i,j;
	printf("Enter the value of N\t");
	scanf("%d",&n);
	input_array=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&input_array[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(i%2)
			{
				if(input_array[i]>input_array[j])
				{
					input_array[i]=input_array[i]+input_array[j]-(input_array[j]=input_array[i]);
				}
			}
			else
			{
				if(input_array[i]<input_array[j])
				{
					input_array[i]=input_array[i]+input_array[j]-(input_array[j]=input_array[i]);
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",input_array[i]);
	}
	free(input_array);
}

