#include<stdio.h>
int main()
{
	int arr[10],i,j,temp,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements in the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\n elements of array in ascending order is:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
