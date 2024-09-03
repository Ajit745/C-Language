#include<stdio.h>

//Write a Program to find the cube of a given number using UDF.
int cube(int n)
{
	int i;
	return n*n*n;

}

int main()
{
	int x;
	printf("Enter Any Number : ");
	scanf("%d",&x);
	printf("%d",cube(x));

	return 0;
}
