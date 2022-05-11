#include<stdio.h>
int main()
{
	char ch[20];
	printf("enter string");
	scanf("%[^\n]",&ch);
	printf("entered string is %s",ch);
	return 0;
}
