#include<stdio.h>

//Write a Program to find the cube of a given number using UDF.
void cube(int n)
{
	int i;
	for(i=1; i<=10; i++)
	{
			printf("%d * %d = %d\n",n,i,n*i);
	}

}

int main()
{
	int n;
	printf("Enter Any Number : ");
	scanf("%d",&n);
	cube(n);

	return 0;
}
