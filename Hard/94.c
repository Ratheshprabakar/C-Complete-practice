/*Given an integer array, write a function to reverse every set of  'k' numbers. Modify the same array without creating another array. Reverse the remaining elements even if it is less than 'k'. 

Example: 
Input:  {2, 1 , 3 , 5 , 8 , 6 , 7 , 9}   and k = 3 
Output:  {3 , 1 , 2 , 6 , 8 , 5 , 9 , 7}*/
#include<stdio.h>
int main()
{
	int n,*input_array,i,k;
	printf("Enter the array size\t");
	scanf("%d",&n);
	input_array=(int *)malloc(n*sizeof(int));
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&input_array[i]);
	}
	printf("Enter the value of K\t");
	scanf("%d",&k);
	for(i=0;i<n;i+=k)
	{
		int left_element = i;
		int right_element=min(i+k-1,n-1);
		//printf("The right element : %d",right_element);
		while(left_element<right_element)
			{
				input_array[left_element]^=input_array[right_element];
				input_array[right_element]=input_array[left_element]^input_array[right_element];
				input_array[left_element]^=input_array[right_element];
				left_element++;
				right_element--;		
			}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",input_array[i]);
	}
	free(input_array);
}
int min(int a,int b)
{
	int minimum;
	if(a<b)
	{
		minimum=a;
	}
	else
	{
		minimum=b;
	}
	return minimum;
}
