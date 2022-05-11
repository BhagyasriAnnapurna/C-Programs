#include<stdio.h>
int main()
{
	char op;
	double n1,n2;
	
	printf("enter an operator(+,-,*,/):");
	scanf("%c",&op);
	
	printf("enter two operands:");
	scanf("%lf %lf",&n1,&n2);
	
	switch(op)
	{
		case'+':
			printf("%lf+%lf=%lf",n1,n2,n1+n2);
			break;
		case'-':
			printf("%lf-%lf=%lf",n1,n2,n1-n2);
			break;
		case'*':
			printf("%lf*%lf=%lf",n1,n2,n1*n2);
			break;
		case'/':
			printf("%lf/%lf=%lf",n1,n2,n1/n2);
			break;
		default:
			printf("Error!operator is not coorect");
	}
	return 0;
}
