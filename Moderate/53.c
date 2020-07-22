//Program to convert Binary to Decimal.
#include<stdio.h>
int main()
{
	int n,k=0,sum=0,rem;
	printf("Enter the binary number\t");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		sum+=(rem *pow(2,k));
		k++;
		n/=10;
	}
	printf("\nThe Decimal value is %d",sum);
}
