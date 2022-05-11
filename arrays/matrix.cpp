#include<stdio.h>
int main()
{
	int i,j,a[10][10],b[10][10],c[10][10],r,n;
	printf("enter the numbr of rows:");
	scanf("%d",&r);
	printf("enter the number of columns:");
	scanf("%d",&n);
	printf("enter the elements of first matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter the element:");
			scanf("%d",&a[10][10]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
