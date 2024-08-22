
#include<stdio.h>

void main()
{
	int i,n;
	printf("Enter The Size Of Array : ");
	scanf("%d",&n);
	
	int a[n],b[n],c[n];
	
	for(i=0; i<=n-1; i++)
	{
		printf("Enter The Value Of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n\n");
	
	for(i=0; i<=n-1; i++)
	{
		printf("Enter The Value Of b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	
	printf("\n\n\n");
	
	for(i=0; i<=n-1; i++)
	{
		c[i] = a[i] + b[i];
    }  
	
	for(i=0; i<=n-1; i++)
	{
		printf("c[%d] = %d\n ",i,c[i]);
    }  	
}

