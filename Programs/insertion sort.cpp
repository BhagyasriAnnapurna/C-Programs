#include<stdio.h>
int main()
{
	int a[10],i,j,n,temp;
	printf("enter the no .of elements:");
	scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
	for(i=0;i<=n-1;i++)
	{
		j=i;
		while(j>0 && a[j]<a[j-1])
		{
			temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
			j--;
		}
	}
	printf("after sorting elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
