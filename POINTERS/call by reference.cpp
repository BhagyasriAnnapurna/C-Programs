#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a=10,b=20;
	printf("before swap=\t%d\t%d\n",a,b);
	swap(&a,&b);
	printf("after swap=\t%u\t%u\n",&a,&b);
	printf("after swap=\t%d\t%d\n",a,b);
	return 0;
}
void swap(int* x,int* y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
	//printf("after swap=\t%d\t%d\n",*x,*y);
	printf("after swap=\t%d\t%d\n",x,y);
}
