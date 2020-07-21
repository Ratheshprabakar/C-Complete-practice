//Add 'n' numbers.
#include<stdio.h>
int main()
{
	int i,n,temp,sum=0;
	printf("Enter the value of N\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the number\t");
		scanf("%d",&temp);
		sum+=temp;		
	}
	printf("The total is %d",sum);
}
