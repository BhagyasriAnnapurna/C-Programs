#include<stdio.h>
#include<string.h>
int main()
{
	char set1[10],set2[10];
	printf("enter set1:");
	scanf("%s",&set1);
	printf("enter set 2:");
	scanf("%s",&set2);
	strcpy(set1,set2);
	printf("%s",set1);
	return 0;
}
