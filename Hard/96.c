/*You are given two sorted integer arrays A and B. The sort order can be ascending or descending. Write a program to create an array C that contains integers from A and B. C should be in ascending order and shouldn't have any duplicates. 
Note: Removal of duplicates and ordering has to be done while adding elements to C. i.e. don't write separate loops to sort and remove duplicates. 

Examples: 
Input: [3, 6, 9], [8, 7, 5] 
Output: [3, 5, 6, 7, 8, 9] 
Input: [9, 9, 6, 3], [5, 7, 8, 9] 
Output: [3, 5, 6, 7, 8, 9] 
Input: [9, 6], [5, 17, 21] 
Output: [5, 6, 9, 17, 21] */
#include<stdio.h>
int main()
{
	int size_1,size_2,*first_array,*second_array,*result_array,i,j,pointer1,pointer2,flag1=0,flag2=0,k=0;
	printf("Enter the size of array 1\t");
	scanf("%d",&size_1);
	first_array=(int *)malloc(size_1*sizeof(int));
	printf("Enter the first array elements\n");
	for(i=0;i<size_1;i++)
	{
		scanf("%d",&first_array[i]);
	}
	printf("Ener the size of array 2\t");
	scanf("%d",&size_2);
	second_array=(int *)malloc(size_2*sizeof(int));
	printf("Enter the second array elements\n");
	for(i=0;i<size_2;i++)
	{
		scanf("%d",&second_array[i]);
	}
	result_array=(int *)malloc((size_1+size_2)*sizeof(int));
	if(first_array[0]>first_array[size_1-1])
	{
		pointer1=size_1;
		flag1=1;	//flag 1 means descending array
	}
	else
	{
		pointer1=0;
		flag1=0;
	}
	if(second_array[0]>second_array[size_2-1])
	{
		pointer2=size_2;
		flag2=1;
	}
	else
	{
		pointer2=0;
		flag2=0;
	}
	
	printf("First array minimum value %d\n",pointer1);
	printf("Second array minimum value %d\n",pointer2);
	if(flag1==0 && flag2==0)
	{
		for(i=pointer1,j=pointer2;i<size_1 && j<size_2;)
		{
			if(first_array[i]<second_array[j])
			{
				result_array[k]=first_array[i];
				i++;k++;
			}
			else if(first_array[i]>second_array[j])
			{
				result_array[k]=second_array[j];
				j++;k++;
			}
			else
			{
				result_array[k]=second_array[j];
				i++;
				j++;
				k++;
			}
		}
	}
	else if(flag1==1 && flag2==0)
	{
		for(i=pointer1,j=pointer2;i>=0 && j<size_2;)
		{
			if(first_array[i]<second_array[j])
			{
				result_array[k]=first_array[i];
				i--;k++;
			}
			else if(first_array[i]>second_array[j])
			{
				result_array[k]=second_array[j];
				j++;k++;
			}
			else
			{
				result_array[k]=second_array[j];
				i--;
				j++;
				k++;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d\t",result_array[i]);
	}
	
}
