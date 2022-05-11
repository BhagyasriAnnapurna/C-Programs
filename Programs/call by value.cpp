#include<stdio.h>
int swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("after swapping values x=%d,y=%d\n",x,y);
}
int main()
{
	int a=10;int b=20;
	printf("before swapping a=%d,b=%d\n",a,b);
	swap(a,b);
	return 0;
}
