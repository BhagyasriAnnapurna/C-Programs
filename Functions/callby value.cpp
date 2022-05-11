#include<stdio.h>
void num(int);
int main()
{
	int x=20;
	printf("value of x before function call=%d\n",x);
	num(x);
	printf("value of x after function call=%d\n",x);
	return 0;
}
void num(int x)
{
	x=x+10;
	printf(" value of x=%d\n",x);
}
