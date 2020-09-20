//Binary Search
#include<stdio.h>
int main()
{
	int n,*array,element,i;
	printf("Enter the number of elements\t");
	scanf("%d",&n);
	array=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)	
		scanf("%d",&array[i]);
	printf("Enter the element you want to search\t");
	scanf("%d",&element);
	if(binarysearch(array,0,n-1,element))
		printf("Element found");
	else
		printf("Element not found");
	free(array);
	
}
int binarysearch(int array[],int l,int r,int element)
{
	if(r>=l)
	{

		int mid=l+(r-l)/2;
		if(array[mid]==element)
			return mid;
		if(array[mid]>element)
			return binarysearch(array,l,mid-1,element);
		return binarysearch(array,mid+1,r,element);
	}
	return 0;
}
