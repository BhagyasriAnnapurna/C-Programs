#include<stdio.h>
void mul(int,int);
int main()
{
	int a,b;
	printf("enter the values of a,b:");
	scanf("%d %d",&a,&b);
	mul(a,b);
	return 0;
}
void mul(int x,int y)
{
	int z;
	z=x*y;
	printf("product is %d",z);
}
