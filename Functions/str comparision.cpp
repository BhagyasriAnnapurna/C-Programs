#include<stdio.h>
#include<string.h>
int main()
{
	char set1[20]="bhagyasri";
	char set2[20]="electronics";
	if(strcmp(set1,set2)==0)
	{
	   printf("set1 and set2 are equal");
	}
	else
	{
		printf("set1 and set2 are not equal");
	}
	return 0;
}
