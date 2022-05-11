#include<stdio.h>
int add(void);
int main()
{
	int x;
	x=add();
	printf("sum=%d",x);
	return 0;
}
int add()
{
	int a,b,x;
	printf("enter the numbers a,b:");
	scanf("%d %d",&a,&b);
	x=a+b;
	return x;
}
