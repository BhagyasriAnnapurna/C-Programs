#include<stdio.h>
#include<conio.h>
int main()
{
	char arr[3][15]={"computer","laptop","phone"};
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;arr[i][j]!='\0';j++)
		{
			printf("%c",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
