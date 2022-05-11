#include<stdio.h>
int main()
{
	int a,b,*p,*q,s;
	printf("enter the values of a and b:\n ");
	scanf("%d %d",&a,&b);
	p=&a;
	q=&b;
	s=*p+*q;
	printf("sum of numbers is %d",s);
	return 0;
	
}
