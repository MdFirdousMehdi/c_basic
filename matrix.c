#include<stdio.h>
int main()
{
	int row1,row2,col1,col2,total=0;
	int mat1[9][9];
	int mat2[9][9];
	int multi[9][9];
	int i,j,k;
	printf("enter the rows of matrix1:");
	scanf("%d",&row1);
	printf("enter the columns of matrix1:");
	scanf("%d",&col1);
	printf("enter the rows of matrix 2:");
	scanf("%d",&row2);
	printf("enter the columns of matrix 2:");
	scanf("%d",&col2);
	printf("enter the elements of the matrix 1:");
	for( i=0;i<row1;i++)
	{
		for(j=0; j<col1;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("enter the elements of the matrix 2:");
	for( i=0;i<row2;i++)
	{
		for( j=0;j<col2;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	if(col1==row2)
	{
		for( i=0;i<row1;i++)
		{
			for( j=0;j<col2;j++)
			{
				for( k=0;k<row2;k++)
				{
	
					total=total+mat1[i][k]*mat2[k][j];
				}
				multi[i][j]=total;
				total=0;
			}
		}
	}
	printf("The result of multiplication is:");
	for( i=0;i<row1;i++)
	{
		for( j=0;j<col2;j++)
		{
			printf("%d \n",multi[i][j]);
		}
	}
	return 0;
}
	
	
		





