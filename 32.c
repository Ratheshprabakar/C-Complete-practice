//Program to take two numbers and check whether they are amicable numbers or not.
#include<stdio.h>
int main()
{
	int a,b,i,sum=0;
	printf("Enter the two numbers\n");
	scanf("%d\t%d",&a,&b);
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		{
			sum+=i;	
		}	
	}
	if(sum==b)
	{
		sum=0;
		for(i=1;i<b;i++)
		{
			if(b%i==0)
			{
				sum+=i;	
			}	
		}
		if(sum==a)
			printf("Amicable Numbers\n");
		else
			printf("Not an Amicable Numbers\n");
	}
	else
	{
		printf("Not an Amicable Numbers\n");	
	}
}
