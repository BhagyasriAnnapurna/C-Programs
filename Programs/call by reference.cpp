#include<stdio.h>
int swap(int *x,int *y)
{
	int temp;

    temp=*x;
    *x=*y;
    *y=temp;
    printf("after swapping x=%d,y=%d\n",*x,*y);
}
int main()
{
	int a=40;int b=90;
	printf("before swapping a=%d,b=%d\n",a,b);
	swap(&a,&b);
	return 0;
}

