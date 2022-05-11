#include<stdio.h>
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
	static int a;
	a=a+1;
	printf("%d",a);
}
void decrement()
{
	static int a;
	a=a-1;
	printf("%d",a);
}
