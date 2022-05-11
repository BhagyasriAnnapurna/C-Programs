#include<stdio.h>
int main()
{
	int a=20,b=90;
	printf("before swap:\t%d\t%d",a,b);
	swap(a,b);
	printf("after swap:\t%d\t%d",a,b);
	return 0;
}
void swap(int x,int y)
{
	int temp=x;
	x=y;
	y=temp;
	printf("after swap :\t%d\t%d",x,y);
}
