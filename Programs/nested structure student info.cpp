#include<stdio.h>
struct student
{
	char name[30];
	int id;
	struct DOB
	{
		int dd;
		int mm;
		int yy;
	}DOB;
};
int main()
{
	struct student s1;
	printf("enter the name:");
	scanf("%s",&s1.name);
	printf("enter the id:");
	scanf("%d",&s1.id);
	printf("enter the date of birth[DD MM YY] format:");
	scanf("%d %d %d",&s1.DOB.dd,&s1.DOB.mm,&s1.DOB.yy);
	printf("\n Name:%s\nId:%d\nDate of Birth:%d %d %d \n",s1.name,s1.id,s1.DOB.dd,s1.DOB.mm,s1.DOB.yy);
	return 0;
}
