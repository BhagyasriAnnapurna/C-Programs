#include<stdio.h>
float square(float x);
int main()
{
	float m,n;
	printf("enter a number to find the square:\n");
	scanf("%f",&m);
	n=square(m);
	printf("square of is:",&n);
}
float square(float x)
{
	float p;
	p=x*x;
	return (p);
}
