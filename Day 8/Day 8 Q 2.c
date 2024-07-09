#include<stdio.h>
#include<conio.h>

void main()
{
	//Write a Program to find the maximum number from the given 4 numbers using nested if else.
	
	int a,b,c,d;
	printf("Enter The Value Of a :");
	scanf("%d",&a);
	printf("Enter The Value Of b :");
	scanf("%d",&b);
	printf("Enter The Value Of c :");
	scanf("%d",&c);
	printf("Enter The Value Of d :");
	scanf("%d",&d);
	
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("a is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("b is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
	}
}

