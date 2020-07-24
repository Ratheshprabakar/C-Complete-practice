// Program to add two strings without using concat() function
#include<stdio.h>
int main()
{
	char string1[50],string2[100];
	int i,index;
	printf("Enter the first string\t");
	gets(string1);
	printf("Enter the second string\t");
	gets(string2);
	index=strlen(string1);
	for(i=0;i<strlen(string2);i++)
	{
		string1[index]=string2[i];
		index++;
	}
	printf("Concated String is %s",string1);
}
