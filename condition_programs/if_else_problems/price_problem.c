#include<stdio.h>
void main()
{
	float x,y,z,m,l;
	scanf("%f%f%f",&x,&y,&z);
	
		if(x==y && y==z)
		{
			l=x+y+z;
			printf("price is %.2f",l);
		}
		else if(x==y)
		{
			m = (x*0.9)*2;
			l = m+z;
			printf("price is %.2f",l);
		}
		else if(x==z)
		{
			m = (x*0.9)*2;
			l = m+y;
			printf("price is %.2f",l);
		}
		else if(y==z)
		{
			m = (y*0.9)*2;
			l = m+x;
			printf("price is %.2f",l);
		}
		else
		{
			l=x+y+z;
			printf("price is %.2f",l);
		}
		
	}
		
