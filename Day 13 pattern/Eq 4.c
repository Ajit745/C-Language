#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k,l,m;
	for(i=5; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		for(l=i; l<=4; l++)
		{
			printf("    ");
		}
		for(k=i; k>=1; k--)
		{
			printf("%d ",k);
		}
		printf("\n");
	}
	
}
