#include<stdio.h>
struct student
{
	int id;
	char name[20];
	float grade;
}s1,s2;
int main()
{
	printf("enter id no of s1:");
	scanf("%d",&s1.id);
	printf("enter the name of s1:");
	scanf("%s",&s1.name);
	printf("enter the grade of s1:");
	scanf("%f",&s1.grade);
	printf("enter id no of s2:");
	scanf("%d",&s2.id);
	printf("enter the name of s2:");
	scanf("%s",&s2.name);
	printf("enter the grade of s2:");
	scanf("%f",&s2.grade);
	printf("the details of students are\n");
	printf(" %d \n %s \n %f \n",s1.id,s1.name,s1.grade);
	printf(" %d \n %s \n %f ",s2.id,s2.name,s2.grade);
	return 0;
}
