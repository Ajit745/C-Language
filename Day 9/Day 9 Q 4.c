#include<stdio.h>
#include<conio.h>

void main()
{
	//Write a Program to print odd numbers from N to 1 using a while loop.
	int n;
	printf("Enter n :");
	scanf("%d",&n);
	
	while(n>=1)
	{
		if(n%2==1)
		{
		printf("%d ",n);
		
		}
	n--;	
	}
}
