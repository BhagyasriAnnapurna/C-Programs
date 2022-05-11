#include<stdio.h>
int main()
{
	int i;
	int a[7]={1,2,3,4,5,6,7};
	int *p=a;
	for(i=0;i<7;i++)
	{
		printf("%d",*p);
		p++;
	}
	return 0;
}
