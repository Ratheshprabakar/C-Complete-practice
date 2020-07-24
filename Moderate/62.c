//Program to check vowels in string
#include<stdio.h>
int main()
{
	char string[100];
	int i,count=0;
	printf("Enter the string\t");
	gets(string);
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]=='a'||string[i]=='e' || string[i]=='i' || string[i]=='e' || string[i]=='u' || string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U')
			count++;
	}
	printf("Number of vowels in the string %s is %d",string,count);
}
