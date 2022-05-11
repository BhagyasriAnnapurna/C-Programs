#include<stdio.h>
int mul(void);
int main()
{
	int c;
	c=mul();
	printf("product is %d",c);
	return 0;
}
int mul()
{
	int a,b,c;
	printf("enter the value of a,b:");
	scanf("%d %d",&a,&b);
	c=a*b;
	return c;
}
