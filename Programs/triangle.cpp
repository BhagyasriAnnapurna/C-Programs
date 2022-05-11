#include<stdio.h>
#include<conio.h>
int main()
{
int i,star,rows;
printf("enter the number of rows\n");
scanf("%d",&rows);
for(i=rows;i>=1;i--)//for(i=1;i<=rows;i++)//reverse traingle
{
for(star=1;star<=i;++star)
{
printf("* ",star);//printf("* ");
}
 printf("\n");
}
getchar();
return 0;}


