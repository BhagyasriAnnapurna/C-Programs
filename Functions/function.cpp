#include<stdio.h>
int max(int a,int b);
int main()
{
	int x;int y;int ret;
	printf("enter two numbers=");
	scanf("%d %d",&x,&y);
	ret=max(x,y);
	printf("the max of two numbers is %d",ret);
}
int max(int a,int b)
{
	int result;//this is neccesary//
	if(a>b)
    result=a;
	else
	result=b;
	return(result);
}
