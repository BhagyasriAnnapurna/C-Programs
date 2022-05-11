#include<stdio.h>
int main()
{
	char arr[3];
	int i;
	printf("enter the characters:");
	for(i=0;i<3;i++)
	{
		scanf("%c",&arr[i]);
	}
	printf("array is ");
	for(i=0;i<3;i++)
	{
		printf("%c",arr[i]);		 
	}
	return 0 ;
}
