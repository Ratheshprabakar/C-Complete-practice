//Program to take a number from user and check whether it is Armstrong number or not.
#include<stdio.h>
int main()
{
	int n,temp,rem,total=0;
	printf("Enter the number\t");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		total+=(rem*rem*rem);
		n/=10;	
	}
	(total==temp)?printf("Armstrong Number\n"):printf("Not an Armstrong Number\n");
}

