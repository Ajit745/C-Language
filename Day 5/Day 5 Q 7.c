#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	printf("Enter The Value of x :");
	scanf("%d",&x);
	printf("Enter The Value of y :");
	scanf("%d",&y);
	printf("Enter The Value of z :");
	scanf("%d",&z);
	
	printf("(x+y+z)2 = %d",(x*x) + (y*y) + (z*z) + (2*(x*y)+2*(y*z)+2*(z*x)));
}
