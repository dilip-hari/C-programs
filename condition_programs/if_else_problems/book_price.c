#include<stdio.h>
void main()
{
	int x,y,z;
	scanf("%d%d",&x,&y);
		if(x>=2 && x<=4)
		{
			z=(x*y)*0.9;
			printf("price is %d",z);
		}
		else if(x==5)
		{
			z=(x*y)*0.8;
			printf("price is %d",z);
	    }
		else if(x>5)
	    {
			z=(x*y)*0.5;
			printf("price is %d",z);
	    }
	
		else
		{
			z=x*y;
			printf("price is %d",z);
		}
		
	}
