#include<stdio.h>
int prime(int);
int main()
{
	int n,res;
	printf("enter a number:");
	scanf("%d",&n);
	res=prime(n);
	if(res==1)
	{
		printf("%d is a prime number",n);
	}
	else
	{
		printf("%d is not a prime number",n);
	}
	return 0;
}
int prime(int n)
{
	int i;//int i,c=0;
	for(i=2;i<n-1;i++)//for(i=1;i<=n;i++)
	{
		if(n%i==0)
		return 0;
		else
		return 1;
	}
}
