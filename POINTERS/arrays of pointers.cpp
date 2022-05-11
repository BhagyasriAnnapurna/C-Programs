#include<stdio.h>
int main()
{
	int i;
	int arr[6]={1,2,4,5,7,9};
	int *p;
	p=&arr[0];
	for(i=0;i<6;i++)
	{
		printf("%d,",*p);
		p++;
	}
	return 0;
}
