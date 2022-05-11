#include<stdio.h> 
main()
{
	int arr[10],large,sec,i,n;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&arr[i]);
    }
	large=arr[0];
	for(i=1;i<n;i++)
	{
		if(large<arr[i])
	 	{
	 		int tem=large;
	 	    large=arr[i];
	 		 arr[i]=tem;
		}
	}
	sec=arr[0];
	for(i=1;i<n;i++)
	{
		if((sec<arr[i])&&(large!=arr[i]))
	 	{
	 		int temp=sec;
	 		sec=arr[i];
	 		 arr[i]=temp;
		}
	}
	printf("second largest element is:",&sec);
}
