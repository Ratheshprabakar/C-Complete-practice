// Program to convert string from uppercase to lowercase
#include<stdio.h>
int main()
{
	char string1[100];
	int i;
	printf("Enter the string\t");
	gets(string1);
	for(i=0;i<strlen(string1);i++)
	{
		if(string1[i]>=65 && string1[i]<=90)		
			string1[i]=string1[i]+32;
	}
	printf("The string is \t%s",string1);
}
