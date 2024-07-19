#include<stdio.h>
#include<conio.h>

void main()
{
	//WAP to print the multiplication table of N using while loop.
	int i=1;
	int n;
	int x;
	printf("Enter n :");
	scanf("%d",&n);
	
	while(i<=10)
	{
		x=n*i;
		printf("%d x %d = %d\n",n,i,x);
		i++;
	}

}
