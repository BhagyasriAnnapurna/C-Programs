#include<stdio.h>
int main()
{
	char s[100];
	int b=0;
	printf("enter a string:");
	gets(s);
	while(s[b]!=0)
	{
		b++;
	}
	printf("length of the string=%d\n",b);
	return 0;
	
}
