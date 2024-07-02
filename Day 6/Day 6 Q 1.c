#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	printf("Enter x :");
	scanf("%d",&x);
	printf("Enter y :");
	scanf("%d",&y);
	printf("Enter Z : ");
	scanf("%d",&z);
	(x<y)?(x<z)?printf("x is minimum"):printf("z is minimum"):(y<z)?printf("y is minimum"):printf("z is minimum");
}
