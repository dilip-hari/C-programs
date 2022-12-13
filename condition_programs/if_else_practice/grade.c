#include<stdio.h>
void main()
{
	int avg;
	scanf("%d",&avg);
	if(avg >= 90 && avg <= 100)
	printf("%d is O grade",avg);
	else if(avg >= 80 && avg <= 89)
	printf("%d is A+ grade",avg);
	else if(avg >= 70 && avg <= 79)
	printf("%d is A grade",avg);
	else if(avg >= 60 && avg <= 69)
	printf("%d is B+ grade",avg);
	else if(avg >= 50 && avg <= 59)
	printf("%d is B grade",avg);
	else
	printf("%d is reappear",avg);
}
