#include<stdio.h>
int fact(int);
int main()
{
	int n,res;
	printf("enter the value:");
	scanf("%d",&n);
	res=fact(n);
	printf("factorial is %d",res);
	return 0;
}
int fact(int n)
{
	int res;
	if(n==0)
	res=1;
	else
	res=n*fact(n-1);
	return res;
}
