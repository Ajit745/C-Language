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
	
printf("(x+y+z)3 = %d",(x*x*x) + (y*y*y) + (z*z*z) + (3*(x+y)*(y+z)*(z+x)));
}
