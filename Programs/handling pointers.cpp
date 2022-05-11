#include<stdio.h>
int main()
{
	int a,b,c,*d, *p,*q;
	printf("enter the two numbers:");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	c=a+b;
	d=&c;
	printf("%u\n",&a);
	printf("sum of a&b using variables:%u\n",c);
	printf("sum of a&b using variables:%u",d);
	return 0; 	
}


