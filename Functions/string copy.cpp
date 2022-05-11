#include<stdio.h>
#include<string.h>
int main()
{
	char set1[20]="i am bhagya";
	char set2[20]="i am anil";
	strcpy(set1,set2);
	printf("%s",set1);
	return 0;
}
