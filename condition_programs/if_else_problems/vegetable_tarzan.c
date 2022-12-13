#include<stdio.h>
void main()
{
	int a,b,c,d,x,m,l;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&x);
	m=((a*1)+(b*2)+(c*5)+(d*10));
	if(m==x)
	printf("paid");
	if(m>x)
	{
		l=m-x;
		printf("paid %d",l);
	}
	else if(m<x)
	{
		printf("not paid %d",m);
	}
}
