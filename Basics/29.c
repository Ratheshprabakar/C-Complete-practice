//Average of numbers.
#include<stdio.h>
int main()
{
	int n,i,temp;
	float sum=0.0;
	printf("Enter total Numbers\t");
	scanf("%d",&n);
	printf("Enter %d Numbers\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&temp);
		sum+=temp;	
	}
	printf("The Average of %d numbers are %.2f",n,sum/n);
}
