//Program to check whether the matrix is sparse matrix or not.
#include<stdio.h>
int main()
{
	int array[10][10];
	int m,n,count=0;
	printf("Enter number of rows and columns\t");
	scanf("%d\t%d",&m,&n);
	printf("Enter the matrix values\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&array[i][j]);
			if(array[i][j]==0)
				count++;					
		}
	}
	(count>(m+n)/2)?printf("Sparse Matrix with %d zeros",count):printf("Not a Sparse matrix with %d non zeros",(m*n)-count);
}
