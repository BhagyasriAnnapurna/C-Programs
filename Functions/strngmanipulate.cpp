#include<stdio.h>
#include<string.h>
int main()
{
	char set1[10]="bhagya";
	char set2[19]="ANIL";
	strcat(strupr(set1),strlwr(strrev(set2)));
	printf("%s",set1);
	return 0;
}
