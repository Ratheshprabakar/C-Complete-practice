// Program to accept number and print if it is prime number or not.
#include<stdio.h>
int main()
{
	int n,i,flag=1;
	printf("Enter the value of N\t");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=0;
			printf("\nNot a prime number");
			break;	
		}	
	}
	if(flag==1)
	{
		printf("\nPrime Number");	
	}
}
