//Multiplication of two Matrices
#include<stdio.h>
int main()
{
	int m,n,q,p,i,j,k,matrix1[10][10],matrix2[10][10],result[10][10];
	printf("\nEnter the number of rows and columns in first matrix\t");
	scanf("%d\t%d",&m,&n);
	printf("\nEnter the number of rows and columns in second matrix\t");
	scanf("%d\t%d",&p,&q);
	if(n==p)
	{
		printf("Enter the values for first matrix\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&matrix1[i][j]);
			}
		}
		printf("Enter the values for second matrix\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",&matrix2[i][j]);
			}
		}
		printf("\nThe Resultant Matrix is given by\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				result[i][j]=0;
				for(k=0;k<n;k++)
				{
					result[i][j]=result[i][j] + (matrix1[i][k]*matrix2[k][j]);
				}	
			printf("%d\t",result[i][j]);	
			}
			printf("\n");	
		}	
	}
	else
		printf("\nMultiplication not possible\t");
}
