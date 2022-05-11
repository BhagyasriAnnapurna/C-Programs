#include<stdio.h>
int main()
{
	int i,num,p=0;
	printf("enter a number:\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			p++;
		}
	}
	if(p==2)
	{
		printf("entered number is %d"\
		        "and it is a prime number",num);
	}
	else
	{
		printf("given number is not a prime number",num);
	}
	return 0;
}
