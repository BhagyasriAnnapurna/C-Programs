#include<stdio.h>
int main()
{
int i,space,j,star=0;
printf("enter the number of rows in pyramid\n");
scanf("%d",&j);
for(i=1;i<=j;i++)
{
for(space=1;space<=j-i;space++)
{
printf(" ");
}
while (star != (2*i-1))
{
printf("#",star);
star++;
}
star=0;
printf("\n");
}
getchar();
return 0;
}

