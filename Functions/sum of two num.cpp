#include<stdio.h>
int add(int n1,int n2)
{
	int sum;
	sum=n1+n2;
	return sum;
}
int main()
{
	int a,b;
	printf("enter number 1:");
	scanf("%d",&a);
	printf("enter number 2:");
	scanf("%d",&b);
	int result=add(a,b);
	printf("output:%d",result);
	return 0;
}
