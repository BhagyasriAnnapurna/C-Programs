#include<stdio.h>
void add(void);
int main()
{
	add();
	return 0;
}
void add()
{
	int a,b,sum=0;
	printf("enter the numbers a,b:");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("sum of the numbers is %d",sum);
	
}
