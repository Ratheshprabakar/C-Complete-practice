//Program to reverse the string using pointer
#include<stdio.h>
int main()
{
	char string[100],*p;
	int i;
	printf("Enter the string\t");
	gets(string);
	p=string;
	for(i=0;i<strlen(string);i++)p++;
	printf("The Reversed string is \t");
	for(i=strlen(string);i>=0;i--)
		printf("%c",*p--);

	
		
	
}
