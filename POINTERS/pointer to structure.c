#include<stdio.h>
struct student
{
	char name[20];
	int id;
	float perc;
};
main()
{
	struct student *p,s1={"bhagya",671,89.45};
	p=&s1;
	printf("student name %s\n",p->name);
	printf("id number:%d\n",p->id);
	printf("percentage:%f",p->perc);
}
