#include<stdio.h>

void main()
{
	//1.WAP to get & print 2D array of N elements.
	int r,c,i,j;
	printf("Enter The Number Of Rows For The Array :");
	scanf("%d",&r);
	printf("Enter The Number Of Columns For The Array :");
	scanf("%d",&c);
	
	int a[r][c];
	printf("Enter The Value of Array :\n");
	
	for(i=0; i<r; i++) 
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	
	for(i=0; i<r; i++) 
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}	
	
}
