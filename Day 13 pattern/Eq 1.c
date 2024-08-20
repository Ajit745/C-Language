
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,l;
	for(i=5; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		
		printf("\n");
		
	}
	for(k=2; k<=5; k++)
	{
		for(l=1; l<=k; l++)
		{
			printf("%d ",l);
		}
		printf("\n");
	}
}

