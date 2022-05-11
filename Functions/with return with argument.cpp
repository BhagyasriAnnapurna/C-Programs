#include<stdio.h>
int max(int,int);
int main()
{
	int a,b,c;
	printf("enter the values of a,b:");
	scanf("%d %d",&a,&b);
	c=max(a,b);
	printf("max=%d",c);
	return 0;
}
int max(int x,int y) // function definition
{
	int z;
	if(x>y)
	z=x;
	else
	z=y;
	return z;
}
	
