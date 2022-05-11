#include<stdio.h>
int main()
{
	int a,b,*x,*y;
	a=30;b=40;
	x=&a;
	y=&b;
	printf("%d\n",*x);
	*x=*x++;
	printf("%d",*x);
	return 0;
}
