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
	//  x 3 - y 3 - z 3 - 3 x 2 y + 3 xy 2 - 3 y 2 z - 3 yz 2 + 3 xz 2 - 3 x 2 z + 6 xyz
	printf("(x-y-z)3 = %d",(x*x*x)-(y*y*y)-(z*z*z)-3*(x*x*y)+3*(x*y*y)-3*(y*y*z)-3*(y*z*z)+3*(x*z*z)-3*(x*x*z)+6*(x*y*z));
}
