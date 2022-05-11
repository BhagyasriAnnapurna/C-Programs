#include<stdio.h>
int main()
{
	int num,i,sum=0;
	printf("enter an integer value=\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	   sum=sum+i;
	}
	printf("sum of first %d natural number=%d\n",num,sum);
	return 0;
}
