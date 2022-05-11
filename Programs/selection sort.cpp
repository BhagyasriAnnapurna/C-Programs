#include<stdio.h>
int main()
{
	int arr[10],n,i,j,position,swap;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	printf("\nenter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		position=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[position]>arr[j])
			position=j;
		}
		if(position!=i)
		{
			swap=arr[i];
			arr[i]=arr[position];
			arr[position]=swap;
		}
	}
	printf("sorted list in ascending order:\n");
	for(i=0;i<n;i++)
	  printf("%d\n",arr[i]);
	return 0;
}
