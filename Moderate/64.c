// Program to compare strings without using strcmp() function.
#include<stdio.h>
int main()
{
	char string1[100],string2[100];
	int i;
	printf("Enter the first string\t");
	gets(string1);
	printf("Enter the second string\t");
	gets(string2);
	if(strlen(string1)==strlen(string2))
	{
		for(i=0;i<strlen(string1);i++)
		{
			if(string1[i]!=string2[i])
			{
				printf("\nTwo Strings are not equal");
				break;	
			}	
		}	
		if(i==strlen(string1))
		{
			printf("\nTwo Strings are equal");		
		}
	}
	else
	{
		printf("\nTwo Strings are not equal");
	}
}
