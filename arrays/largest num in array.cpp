#include<stdio.h>
int main()
{
	int i,n;
	float arr[100];
	printf("enter total number of elements(100):\n");
	scanf("%d",&n);
	//stores number entered by the user
	for(i=0;i<n;++i)
	{
		printf("enter number %d:",i+1);
		scanf("%f",&arr[i]);
	}
	//loop to store largest number to arr[0]
	for(i=1;i<n;++i)
	{
		//change '<'to '>' if you want to find smallest element
		if(arr[0]<arr[i])
		arr[0]=arr[i];
	}
	printf("largest element=%2f",arr[0]);
	return 0;
	
}
