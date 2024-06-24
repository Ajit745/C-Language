#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	
	printf("Enter The Value of x :");
	scanf("%d",&x);
	printf("Enter The Value of y :");
	scanf("%d",&y);
	
	printf("(x+y)2 = %d",(x*x) + (2*x*y) + (y*y));
}
