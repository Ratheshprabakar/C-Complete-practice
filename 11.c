//Program to accept three numbers from user and print them in ascending and descending order
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers\t");
	scanf("%d\n%d\n%d",&a,&b,&c);
	if(a>=b && a>=c)
	{
		if(b>=c)
		{
			printf("Descending order\t%d\t%d\t%d",a,b,c);
			printf("\nAscending order\t%d\t%d\t%d",c,b,a);	
		}
		else
		{
			printf("Descending order \t%d\t%d\t%d",a,c,b);
			printf("\nAscending order\t%d\t%d\t%d",b,c,a);	
		}	
	}
	else if(b>=a && b>=c)
	{
		if(a>=c)
		{
			printf("Descending order\t%d\t%d\t%d",b,a,c);	
			printf("\nAscending order\t%d\t%d\t%d",c,a,b);	
		}
		else
		{
			printf("Descending order\t%d\t%d\t%d",b,c,a);	
			printf("\nAscending order\t%d\t%d\t%d",a,c,b);			
		}	
	}
	else
	{
		if(b>=a)
		{
			printf("Descending order\t%d\t%d\t%d",c,b,a);	
			printf("Ascending order\t%d\t%d\t%d",a,b,c);	
		}
		else
		{
			printf("Descending order\t%d\t%d\t%d",c,a,b);	
			printf("Ascending order\t%d\t%d\t%d",b,a,c);			
		}	
	}
}
