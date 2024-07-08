#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	printf("Enter Any Number : ");
	scanf("%d",&x);
	
	if(x>0)
	{
		printf("Number Is Positive");
	}
	else if(x<0)
	{
		printf("Number Is Negative");
	}
	else
	{
		printf("Number Is Neutral");
	}
}
