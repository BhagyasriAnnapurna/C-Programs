#include<stdio.h>
int main()
{
	int a=20;
	int *pt;
	pt=&a;
	printf("%d\n",a);
	printf("%u\n",&a);
	printf("%u\n",pt);
	printf("%d\n",*pt);
}
