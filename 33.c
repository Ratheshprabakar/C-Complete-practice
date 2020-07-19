//Program to accept a number and print the factors of that number
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the value of N\t");
	scanf("%d",&n);
	printf("The Factors are\n");
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			printf("%d\n",i);	
		}	
	}	
	
}
