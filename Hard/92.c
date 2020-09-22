//Balancing symbols
#include<stdio.h>
char stack[40];
int top=-1;
void push(char c);
char pop();
int main()
{
	char str[20];
	int i;
	//printf("Enter the expression");
	scanf("%s",str);
	printf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='(' || str[i]=='[' || str[i]=='{')
			push(str[i]);
		else if(str[i]==')' || str[i]==']' || str[i]=='}')
		{
			if(strcmp(pop(),str[i]))
			{
				printf("\nPlease enter the correct expression\n");
				break;
			}
		}		
	}
	if(i==strlen(str) && top==-1)
	{
		printf("\nBalanced\n");	
	}
}
void push(char c)
{
	if(top!=40)
	{
		strcpy(stack[top++],c);	
	}
}
char pop()
{
	if(top!=-1)
		return stack[top--];
}

