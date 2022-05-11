#include<stdio.h>
int main() 
{ 
	int a[10][10],b[10][10],c[10][10],i,j,p,q; 
	printf("enter the order of the matrix:"); 
	scanf("%d %d",&p,&q); 
	printf("matrix can be added\n"); 
	printf("enter the elements of the matrix a:\n");
	for(i=0;i <p;i++) 
	{
		for(j=0;j <q;j++)  
		{
			scanf("%d",&a[i][j]); 
		}
    }
    printf("elements in first array:\n");
	for(i=0;i <p;i++) 
	{
		for(j=0;j <q;j++)  
		{
			printf("%d\t",a[i][j]); 
    	}
    	printf("\n");
	}
	printf("enter the elements of b:");
	for(i=0;i <p;i++) 
	{
		for(j=0;j <q;j++)  
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("elements of second array:\n");
	for(i=0;i<p;i++)
	{ 
		for(j=0;j<q;j++) 
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
    printf("the sum of the matrix a and b is"); 
	for(i=0;i < p;i++)
	{

		for(j=0;j < q;j++)
		{
			c[i][j]=a[i][j]+b[i][j]; 
		}
	}
	for(i=0;i <p;i++) 
	{ 
		for(j=0;j <q;j++)
		{
  			printf("%d\t",c[i][j]); 
		}
		printf("\n");
	} 
	return 0;
}
