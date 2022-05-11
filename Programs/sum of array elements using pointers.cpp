#include<stdio.h>
int main()
{
	int a[10];
	int i,n,sum=0;
	int *ptr;
	printf("enter the number of elements in list:");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	ptr=a;
	for(i=0;i<n;i++)
	{
		sum=sum+ *ptr;
		ptr++;
	}
	printf("the sum of array elements:%d",sum);
}
