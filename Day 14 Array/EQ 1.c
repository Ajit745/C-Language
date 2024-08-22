#include<stdio.h>

void main()
{
	int i;

	int a[4];
	
	for(i=0; i<4; i++)
	{
		printf("Enter The Value Of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	if(a[0]>a[1] && a[0]>a[2] && a[0]>a[3])
	{
		printf("a[0] is maximum");
    }
	else if(a[1]>a[0] && a[1]>a[2] && a[1]>a[3])
	{
		printf("a[1] is maximum");
	}
	else if(a[2]>a[0] && a[2]>a[1] && a[2]>a[3])
	{
		printf("a[2] is maximum");	
	}
	else
	{
			printf("a[3] is maximum");
	}
	
}
