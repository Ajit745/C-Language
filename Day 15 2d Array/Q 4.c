#include<stdio.h>

void main()
{
	//4.WAP to find peform addition of 2D array & store it into another.
	int r,c,i,j;
	
	printf("Enter The Number Of Rows For The Array :");
	scanf("%d",&r);
	
	printf("Enter The Number Of Columns For The Array :");
	scanf("%d",&c);
	
	
	
	int a[r][c],b[r][c],d[r][c];
	
	
	printf("Enter The Value of Array a :\n");
	
	for(i=0; i<r; i++) 
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter The Value of Array b :\n");
	
	for(i=0; i<r; i++) 
	{
		for(j=0; j<c; j++)
		{
			printf("b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	
		printf("\n");
			
	for(i=0; i<r; i++) 
	{
		for(j=0; j<c; j++)
		{
			d[i][j] = a[i][j]+b[i][j];
		}	
	}
	
	for(i=0; i<r; i++) 
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}

}
