#include<stdio.h>
#include<string.h>
int main()
{
	char set1[20],set2[20];
	printf("enter set1:");
	scanf("%s",set1);
	printf("enter set2:");
	scanf("%s",set2);
	strlwr(set2);
	printf("%s",set2);
	return 0;
}
