#include<stdio.h>
void max(int,int);
int main()
{
	int a,b;
	printf("enter the values of a,b:");
	scanf("%d %d",&a,&b);
	max(a,b);//actual parameters
	return 0;
}
void max(int x,int y)
{
	if(x>y)
	printf("max=%d",x);
	else
	printf("max=%d",y);
}
