
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,l;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		
		printf("\n");
	}
	for(k=4; k>=1; k--)
	{
		for(l=1; l<=k; l++)
		{
			printf("%d ",l);
		}
		printf("\n");
	}
}
