#include<stdio.h>
#include<conio.h>

void main()
{
	//WAP to print sum 1 to N using while loop.
	int i=1;
	int n;
	int x=0;
	printf("Enter n :");
	scanf("%d",&n);
	
	while(i<=n)
	{
		x=i+x;
		i++;
	}
	printf("Sum of number 1 to %d = %d",n,x);
}
