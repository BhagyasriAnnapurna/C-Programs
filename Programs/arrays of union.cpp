#include<stdio.h>
union point
{
	int x,y;
};
int main()
{
	int i;
	union point points[3];
	points[0].x=2;
	points[0].y=5;
	points[1].x=4;
	points[1].y=7;
	points[2].x=3;
	points[2].y=9;
	for(i=0;i<3;i++)
	printf("\n co-ordinate of point[%d] are %d and %d",i,points[i].x,points[i].y);
	return 0;
}
