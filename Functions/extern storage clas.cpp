#include<stdio.h>
int a;
void increment();
void decrement();
int main()
{
	increment();
	increment();
	increment();
	decrement();
	decrement();
	return 0;
}
void increment()
{
	a=a+1;
	printf("%d",a);
}
void decrement()
{
	a=a-1;
	printf("%d",a);
}
