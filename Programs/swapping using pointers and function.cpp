#include<stdio.h>
void swap(int *n1,int *n2);
int main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("before swapping a=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("\nafter swapping a=%d,b=%d",a,b);
	return 0;
}
void swap(int* n1,int* n2)
{
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
}
