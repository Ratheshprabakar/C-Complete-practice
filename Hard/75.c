//Program to reverse the string
#include<stdio.h>
int main()
{
	char string[100];
	char *i,*k;
	char temp;
	printf("Enter the string\t");
	gets(string);
	for(i=string,k=string + strlen(string)-1;k>i;++i,--k)
	{
		*i=*i^*k;
		*k=*k^*i;
		*i=*i^*k;
	}
	printf("\nThe reversed string is %s",string);
	
	
}
