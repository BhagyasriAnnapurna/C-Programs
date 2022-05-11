#include<stdio.h>
int main()
{
	int arr[15],search,i,n;
	printf("enter no of elements in array\n");
	scanf("%d",&n);
	printf("enter %d integers \n",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("enter a no. to search \n");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(arr[i]==search)
		{
			printf("%d is present at location %d\n",search,i+1);
			break;
		}
	}
	if(i==n)
	printf("%d is not present in the array\n",search);
	return 0;
}
