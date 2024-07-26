#include<stdio.h>
#include<conio.h>

void main()
{
	// Write a Program to print the sum of all numbers from 1 to N using a for loop.
	int n,i=1,sum=0;
	printf("Enter The Value Of n :");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum=i+sum;
		i++;
	}
	printf("Sum is %d",sum);
}
