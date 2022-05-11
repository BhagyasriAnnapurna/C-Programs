#include<stdio.h>
int main()
{
	int a[5][5],b[5][5],mul[5][5],i,j,k,r,c,sum;
	printf("enter the number of rows:");
	scanf("%d",&r);
	printf("\n enter the number of column:");
	scanf("%d",&c);
	printf("\n enter the element of first matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\n enter the element[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n enter the element of second matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\n enter the element[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);	
		}
	}
	printf("\n \n element in the first matrix are:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n elements in second matrix are: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=0;
			for(k=0;k<r;k++)
			{
				sum=sum+(a[i][k]*b[k][j]);
			}
			mul[i][j]=sum;
		}
	}
	printf("\n\n Multiplicaiton of Two Matrix are : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
