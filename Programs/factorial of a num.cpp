#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("enter a number to calculate its factorial\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	fact=fact*i;
	printf("factorial of %d is=%d \n",n,fact);
	return 0;
	
}