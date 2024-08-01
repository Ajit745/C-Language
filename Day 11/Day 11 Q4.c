#include<stdio.h>
#include<conio.h>
void main()
{
	//Write a Program to print the Fibonacci series up to N numbers using a for loop.
	//0 1 1 2 3 5 8 13 21 34 .....
	int i=1,ans,first=0,second=1,n;
	printf("Enter n :");
	scanf("%d",&n);
	ans=first+second;
	printf("0,1,");
	for(i=3; i<=n; i++)
	{
		first=second;
		second=ans;
		ans=first+second;
		printf("%d,",ans);
		
	}
	
}
