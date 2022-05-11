#include<stdio.h>
int mul(int,int);
int main()
{
	int a,b,c;
	printf("enter the values of a,b:");
	scanf("%d %d",&a,&b);
	c=mul(a,b);
	printf("product is %d",c);
	return 0;
}
int mul(int x,int y)
{
    int z;
    z=x*y;
    return z;
}
