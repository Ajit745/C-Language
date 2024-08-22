#include<stdio.h>

void main()
{
	int i,n,m,l;
	printf("Enter The Size Of Array a: ");
	scanf("%d",&n);
	printf("Enter The Size Of Array b: ");
	scanf("%d",&m);
	l=n+m;
	
	
	int a[n],b[m],c[l];
	
	for(i=0; i<n; i++)
	{
		printf("Enter The Value Of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n\n");
	
	for(i=0; i<m; i++)
	{
		printf("Enter The Value Of b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	
	printf("\n\n\n");
	
	for(i=0; i<n; i++)
	{
		c[i] = a[i];
    }  
	for(i=0; i<m; i++) 
	{
		c[i+n] = b[i];
	}
	for(i=0; i<l; i++)
	{
		printf("c[%d] = %d\n ",i,c[i]);
    }  	
}
