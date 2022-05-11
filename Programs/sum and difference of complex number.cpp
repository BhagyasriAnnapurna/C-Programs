#include<stdio.h>
struct complex
{
	int real,img;
};
int main()
{
	struct complex a,b,c,d;
	printf("enter a and b where a+ib is the first complex number:");
	scanf("%d %d",&a.real,&a.img);
	printf("enter c and d where c+id is the second complex number:");
	scanf("%d %d",&b.real,&b.img);
	printf("the first complex number is %d+i%d\n",a.real,a.img);
	printf("the second complex number is %d+i%d\n",b.real,b.img);
	c.real=a.real+b.real;
	c.img=a.img+b.img;
	printf("sum of complex numbers:%d+i%d\n",c.real,c.img);
	d.real=a.real-b.real;
	d.img=a.img-b.img;
	printf("difference of complex number:%d+i%d\n",d.real,d.img);
	return 0;	
}
