#include<stdio.h>
void max(void);
int main()
{
  max();
  return 0;
}
void max()
{
 int a,b;
 printf("enter values of a,b:");
 scanf("%d %d",&a,&b);
 if(a>b)
 printf("max=%d",a);
 else
 printf("max=%d",b);
}
