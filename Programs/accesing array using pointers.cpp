#include<stdio.h>
int main()
{
	int a[100],*p,n,i;
	p=a;
	printf("enter the length :");
	scanf("%d",&n);
	printf("enter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	p=a;
	for(i=0;i<n;i++)
	{
		printf("%d\n",*p);
		p++;
	}
}
