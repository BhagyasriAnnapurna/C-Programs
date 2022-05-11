#include<stdio.h>
int main()
{
	int i,j,star;
	printf("enter the no of rows:");
	scanf("%d",&j);
	for(i=1;i<=j;++i)
	{
		for(star=i;star>=1;star--)
	{
		printf("* ");
	}
	   printf("\n");
	}
	getchar();
	return 0;
	
}
