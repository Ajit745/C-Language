#include<stdio.h>
#include<conio.h>

void main()
{
	//WAP to calculate the factorial of N using while loop.
	int i=1;
	int n;
	int x;
	printf("Enter n :");
	scanf("%d",&n);
	
	while(i<=n)
	{
		x=x*i;
		i++;
	}
	printf(" Factorial of %d is %d",n,x);
}
