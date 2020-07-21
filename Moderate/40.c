//Program to check Niven number (Harshad number)
#include<stdio.h>
int main()
{
	int n,temp,sum=0;
	printf("Enter the number\t");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		sum+=(n%10);
		n/=10;	
	}
	(temp%sum==0)?printf("Harshed Or Niven Number\n"):printf("Not a Harshed or Niven Number\n");
}
