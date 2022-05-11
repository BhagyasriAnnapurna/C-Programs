#include<stdio.h>
void add(int,int);
int main()
{
	int a,b;
	printf("enter the values a,b:");
	scanf("%d%d",&a,&b);
	add(a,b);
	return 0;
}
void add(int x,int y)
{
	int z;
	z=x+y;
	printf("sum is %d",z);
}
	
	

