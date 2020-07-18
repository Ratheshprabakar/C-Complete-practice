//Program to print 'n' prime numbers.
#include<stdio.h>
int main()
{
	int n,i,j,flag=1,count=0;
	printf("Enter the value of N\t");
	scanf("%d",&n);
	for(i=2;count!=n;i++)
	{
		flag=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)			
			{
				flag=0;
				break;
			}	
		}
		if(flag==1)
		{
			count++;
			printf("%d\n",i);	
		}	
	}
}
