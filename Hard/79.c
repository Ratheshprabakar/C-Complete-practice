//Program to add two matrix
#include<stdio.h>
int main()
{
	int first_matrix[50][100],second_matrix[50][100];
	int rows,columns,i,j;
	printf("Enter the rows and columns of first matrix\t");
	scanf("%d\t%d",&rows,&columns);
	printf("Enter the value for first matrix\n");
	for(i=0;i<rows;i++)
		for(j=0;j<columns;j++)
			scanf("%d",&first_matrix[i][j]);
	printf("Enter the value for second matrix\n");
	for(i=0;i<rows;i++)
		for(j=0;j<columns;j++)
			scanf("%d",&second_matrix[i][j]);
	printf("The Summation Matrix is \n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			printf("%d\t",first_matrix[i][j]+second_matrix[i][j]);	
		}
		printf("\n");
	}
}
