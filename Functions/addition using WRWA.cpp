#include<stdio.h>
int add(int x,int y);
int main()
{
	int a,b,c;
	printf("enter the numbers a,b:");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("sum of numbers is %d",c);
	return 0;
}
int add(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
