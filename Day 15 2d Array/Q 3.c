#include<stdio.h>

void main()
{
	//3.WAP to find average of 2D array.
	int r,c,i,j;
	float avg,sum=0;
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
		printf("\n");
			
	for(i=0; i<r; i++) 
	{
		for(j=0; j<c; j++)
		{
			sum = sum+a[i][j];
		}
		
	}
	avg = sum/(r*c);
	
	printf("The Average Of Array is %.2f ",avg);
}
