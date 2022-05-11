#include<stdio.h>
int main()
{
	auto int i=1;
	{
		auto int i=2;
		{
			auto int i=3;
			printf("%d\n",i+1);
		}
		printf("%d\n",i-2);
	}
	printf("%d",i+1);
}
