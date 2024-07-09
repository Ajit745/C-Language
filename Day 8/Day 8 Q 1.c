#include<stdio.h>
#include<conio.h>

void main()
{
	//WAP to Find minimum from given 3 number using nested if else.
	int x,y,z;
	printf("Enter The Value Of x :");
	scanf("%d",&x);
	printf("Enter The Value Of y :");
	scanf("%d",&y);
	printf("Enter The Value Of z :");
	scanf("%d",&z);
	
	if(x<y)
	{
		if(x<z)
		{
			printf("x is minimum");
		}
		else
		{
			printf("y is minimum");
		}
	}
	else
	{
		if(y<z)
		{
			printf("y is minimum");
		}
		else
		{
			printf("z is minimum");
		}
	}
}
