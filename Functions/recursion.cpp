#include<stdio.h>
unsigned long long int fact(unsigned int i)
{
	if(i<=1)
	{
		return 1;
	}
	return (i*fact(i-1));
}
int main()
{
	int i=6;
	printf("fact of %d is %d\n",i,fact(i));
	return 0;
}
