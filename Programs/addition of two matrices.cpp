#include<stdio.h>
int main()
{
	int m,n,c,d,first[10][10],second[10][10],sum[10][10];
	printf("enter the number of rows:");
	scanf("%d",&m);
	printf("enter th number of columns:");
	scanf("%d",&n);
	printf("enter the elements of first matrix:\n");
	for(c=0;c<m;c++)
	{
	  for(d=0;d<n;d++)
      {
    	 printf("enter the elemnts[%d][%d]",c,d);
    	 scanf("%d",&first[c][d]);
      }
    }
    printf("enter the elements of second matrix:\n");
    for(c=0;c<m;c++)
    {
    	for(d=0;d<n;d++)
    	{
    		printf("enter the element[%d][%d]",c,d);
    		scanf("%d",&second[c][d]);
		}
	}
    printf("sum of entered matrices:\n");
    for(c=0;c<m;c++)
    {
    	for(d=0;d<n;d++)
    	{
    		sum[c][d]=first[c][d]+second[c][d];
    		printf("%d\t",sum[c][d]);
		}
		printf("\n");
	}
    return 0;
}
