#include<stdio.h>
int main()
{
	int num[30];
	int i,j,a,n;
	printf("enter the number of elements: \n");
	scanf("%d",&n);
	printf("enter the numbers:\n");
	for(i=0;i<n;i++)
    scanf("%d",&num[i]);
    for(i=0;i<n;++i)
    {
    	for(j=i+1;j<n;++j)
    	{
    		if(num[i]<num[j])
    		{
    			a=num[i];
    			num[i]=num[j];
    			num[j]=a;	
			}
		}
	}
	printf("the number arranged in descending order are given below:\n");
	for(i=0;i<n;++i)
	{
		printf("%d\n",num[i]);
    }
	printf("the second largest number is =%d \n",num[1]);	
    return 0;	
}
