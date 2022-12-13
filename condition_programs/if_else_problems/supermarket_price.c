#include<stdio.h>
void main()
{
	float p,h,k,l;
	scanf("%f",&p);
	if(p<=1000)
	{
			h = p*0.1;
			printf("the price is %.2f",h);
	}
	else
	{
			k = (p-1000)*0.05+100;
			printf("the price is %.2f",k);
	}
}

