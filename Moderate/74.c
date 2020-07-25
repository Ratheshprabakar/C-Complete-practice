//Program to remove white space in string
#include<stdio.h>
int main()
{
	char string[100];
	int i,j=0;
	printf("Enter the string\t");
	gets(string);
	for(i=0;i!=strlen(string);i++)
	{
		if(string[i] !=' ')
			string[j++]=string[i];
	}
	string[j]='\0';
	printf("Your string is\t%s",string);
}
