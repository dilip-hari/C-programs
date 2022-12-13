#include<stdio.h>
void main()
{
	double area,radius,height;
	printf("enter radius height");
	scanf("%lf%lf",&radius,&height);
	area = (3.14*radius*radius*height)/3;
	printf("output is %lf",area);
	
}
