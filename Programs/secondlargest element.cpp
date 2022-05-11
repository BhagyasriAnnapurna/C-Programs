#include<stdio.h>
int main()
{
	int i,n,a[20],j,temp,max=0;
	printf("enter the lenght of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the elements of array:");
		scanf("%d",&a[i]);
	}
	printf("before sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
    for(i=0;i<n;i++)
    {
    	for(j=0;j=n-1;j++)
    	{
    		if(a[j]>a[j+1])
    		{
    			temp=a[j];
    			a[j]=a[j+1];
    			a[j+1]=temp;
			}
		}
	}
	printf("after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==a[n-2])
		{
			max=a[i];
		}
	}
	printf("second largest number is %d",max);
}
