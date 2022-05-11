#include<stdio.h>
int main()
{
	int n,temp,dig,rev=0;
	printf("enter a number to check whether it is a palindrome or not:\n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		dig=n%10;
		rev=rev*10+dig;
		n/=10;		
	}
	{
		if(rev==temp)
		printf("%d is a palindrome",temp);
		else
		printf("%d is not a palindrome",temp);	
    }
	return 0; 
}
