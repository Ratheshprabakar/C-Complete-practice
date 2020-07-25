// Program to count frequency of characters in a string.
#include<stdio.h>
int main()
{
	char string[100];
	int i;
	int *count;
	printf("Enter the string\t");
	gets(string);
	count=(int *)malloc(27*sizeof(int));
	for(i=0;i<strlen(string);i++)
	{
		count[string[i]-97]++;
	}
	for(i=0;i<26;i++)
	{
		if(count[i]!=0)		
			printf("\n%c occours %d times",'a'+i,count[i]);	
	}
	free(count);
}
