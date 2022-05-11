#include<stdio.h>
#include<string.h>
#define SIZE 20
struct bookdetail
{
	char name[20];
	char author[20];
	int pages;
	float prices;
};
void output(struct bookdetail v[],int n);
int main()
{
	struct bookdetail b[SIZE];
	int n,i;
	printf("enter the number of books:");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d books details",i+1);
		printf("enter the book name:");
		scanf("%s",&b[i].name);
		printf("enter the number of pages in book:");
		scanf("%d",&b[i].pages);
		printf("enter the price of book:");
		scanf("%f",&b[i].prices);
	}
	output(b,n);
	getchar();
}
void output(struct bookdetail v[],int n)
{
	int i,t=1;
	for(i=0;i<n;i++,t++)
	{
		printf("\n");
		printf("book no:%d",t);
		printf("\tbook %d name is=%s\n",t,v[i].name);
		printf("\tbook %d author is %s\n",t,v[i].author);
		printf("\tbook %d pages is %d",t,v[i].pages);
		printf("\tbook %d price is %f",t,v[i].prices);
		printf("\n");
	}
}
