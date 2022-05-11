#include<stdio.h>
#include<stdlib.h>
struct stud
{
	int id;
	char name[20];
}*ptr[5];
int main()
{
	int i;
	printf("enter the details of students:\n");
	for(i=0;i<4;i++)
	{
		ptr[i]=(struct stud*)malloc(sizeof(struct stud));
		printf("enter the id:");
		scanf("%d",&ptr[i]->id);
		printf("enter the name:");
		scanf("%s",&ptr[i]->name);
	}
	printf("\n \n student details are:\n");
	for(i=0;i<4;i++)
	{
		printf("\n id:%d",ptr[i]->id);
		printf("\n name:%s",ptr[i]->name);
	}
	return 0;
}
