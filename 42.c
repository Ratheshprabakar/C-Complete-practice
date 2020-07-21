//Program to check perfect number
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the number\t");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	(sum==n)?printf("Perfect Number\n"):printf("Not a perfect Number\n");	
}
