//Program to count total number of uppercase and lowercase in a string.
#include<stdio.h>
int main()
{
	char string[100];
	int i,caps=0,small=0;
	printf("Enter the string\t");
	gets(string);
	for(i=0;i<strlen(string);i++)
	{
		if(string[i]>=65 && string[i]<=90)
			caps++;
		else if(string[i]>=97 && string[i]<=122)
			small++;
	}
	printf("\nThe string %s contains %d uppercase and  %d lowercase letters",string,caps,small);
}
