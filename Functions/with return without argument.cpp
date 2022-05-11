#include<stdio.h>
int max(void);
int main()
{
	int x;
	x=max();
	printf("max=%d",x);
	return 0;
}
int max()
{
	int a,b,x;//we can write z or y or any letter in place of x
	printf("enter the values of a,b:");
	scanf("%d %d",&a,&b);
	if(a>b)
	x=a;
	else
	x=b;
	return x;
}
