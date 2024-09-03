#include<stdio.h>


//Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.

int sum(int n)
{
	
	int a[n],add;
	int i;
	printf("Enter The Value Of Array :\n");
	for(i=0; i<n; i++)
	{
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		add = add + a[i];
	}
	return add;
}


int main()
{
	int size;
	printf("Enter The Size Of Array : ");
	scanf("%d",&size);
	printf("Sum Is %d",sum(size));
	return 0;
}
