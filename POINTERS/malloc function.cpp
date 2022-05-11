#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *str;
	str=malloc(20 *sizeof(char));
	if(str==NULL)
	{
		printf("could not able to allocate the requested memory");
	}
	else
	{
		strcpy(str,"hello world!");
	}
	printf("dynamically allocated memory is %s",str);
	return 0;
}
