#include<stdio.h>
int main()
{
	int arr[100],position,value,i,n;
	printf("enter the no. of values:\n");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	 scanf("%d",&arr[i]);
	printf("enter the position:\n");
	scanf("%d",&position);
	printf("enter the value to be inserted:\n");
	scanf("%d",&value);
	for(i=n-1;i>=position-1;i--)
	 arr[i+1]=arr[i];
	arr[position-1]=value;
	printf("the array after insertion of element:\n");
	for(i=0;i<=n;i++)
	 printf("%d\t",arr[i]);
	return 0;
}
