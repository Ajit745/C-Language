#include<stdio.h>
#include<conio.h>

void main()
{
	int year1,year2;
	printf("Enter first number:");
	scanf("%d",&year1);
	printf("Enter second number:");
	scanf("%d",&year2);
	while(year1<=year2)
	{
		if(year1%4==0)
		{
		printf("%d ",year1);
		
		}
	year1++;	
	}
}
