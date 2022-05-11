#include<stdio.h>
int main()
{
	int arr[100],i,n,position;
	printf("enter the no.of elements of array:\n");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	 scanf("%d",&arr[i]);
	printf("enter the position of element that you want to delete:\n");
	scanf("%d",&position);
	if(position>=n+1)
	 printf("deletion is not possible\n");
	else
	{
		for(i=position-1;i<n-1;i++)
		 arr[i]=arr[i+1];
	    printf("resultant array:\n");
		for(i=0;i<n-1;i++)
		 printf("%d\t",arr[i]);
	}
	return 0;
}   
