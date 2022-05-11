#include<stdio.h>
int main()
{
	int i,j,k;
	int arr[3][3][3]={{1,2,3},{4,5,6},{7,8,9}{9,10,11},{12,13,14},{15,16,17}}{{17,18,19},{20,21,22},{23,24,25}};
	clrscr()
	printf("3d array elements:\n\n");
	for(i=0;i<3,i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d\t",arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	getchar();
	return 0;
	
}
