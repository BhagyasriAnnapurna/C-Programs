#include<stdio.h>
int fact(int n)
{
	int res;
	{
	  if(n==0)
	  {
		 res=1;	
	  }
	  else
	  {
		 res=n*fact(n-1);
	  }
    }
	return res;	
}
int main()
{
	int n,res;int fact=1;
	printf("enter a number:");
	scanf("%d",&n);
	{
      res=fact(n);
	printf("%d",res);
	return 0;
    }
}

