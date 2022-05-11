#include<stdio.h>
int main()
{
	int n,i, flag=0;
	
	printf("enter a positive number:");
	scanf("%d",&n);
	
	for(i=2; i<=n/2;++i)
	{
		if(n%i==0)
		{
			flag=1;
			break;1;
		}
	}
	if(n==1)
	{
		printf("1 is neither a prime nor composite.");
	}
	else 
	{
		if (flag==0)
		  printf("%d is a prime number.",n);
		else
		  printf("%d is not a prime number.",n);
	}
	return 0;
}
