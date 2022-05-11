#include<stdio.h>
int sum(int a,int b);
int main()
{
	int x;int y;int ret;
	printf("enter two numbers=");
	scanf("%d %d",&x,&y);
	ret=x+y;
	printf("the max of two numbers is %d",ret);
}
int sum(int a,int b)
{
	int sum=0;
	sum=a+b;
	return(sum);
}
