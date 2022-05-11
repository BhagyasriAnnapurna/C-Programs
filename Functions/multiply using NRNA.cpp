#include<stdio.h>
void mul(void);
int main()
{
	mul();
	return 0;
}
void mul()
{
	int a,b,c;
	printf("enter the numbers a,b:");
	scanf("%d %d",&a,&b);
	c=a*b;
	printf("product is %d",c);
}
