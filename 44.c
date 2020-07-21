//Program to print sum of 'n' prime numbers
#include<stdio.h>
int main()
{
	int n,count=0,i,j,sum=0;
	printf("Enter the N value\t");
	scanf("%d",&n);
	for(i=2;count<=n;i++)
	{
		for(j=2;j<=i-1;j++)
		{
			if(i%j==0)
			{
				break;	
			}	
		}
		if(j==i)
		{
			count++;
			sum+=i;	
		}
		if(count==n)
			break;	
	}
	printf("The Sum of first %d prime numbers are\t%d",n,sum);
}
