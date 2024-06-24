#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	printf("Enter The Value of x :");
	scanf("%d",&x);
	printf("Enter The Value of y :");
	scanf("%d",&y);
	
	printf("(x+y)3 = %d",(x*x*x) + ((3*x*y)*(x+y)) + (y*y*y));
}
