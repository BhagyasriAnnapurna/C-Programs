#include<stdio.h>
int main()
{
	int i=0,j=0;
	int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{5,6,7}};
    for(i=0;i<4;i++)
	{
	 for(j=0;j<2;j++)
     {
        printf("arr[%d][%d]=%d \n",i,j,arr[i][j]);
     }
	}
    return 0;
}
