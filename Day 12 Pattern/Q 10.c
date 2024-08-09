#include<stdio.h>

void main()
{
	int i,j,num=1;
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",num);
			num++;	
		}
		printf("\n");
	}
}
