#include<stdio.h>


//Write a Program to find the length of the String by passing a string as an argument using UDF. Do not use any string function.

int stringLength(char *a)
{
	int length = 0;
	
	while (a[length] != '\0') {
        length++;
    }
    
    return length;
}
int main()
{
	char a[100];
	printf("Enter Any Word :");
	scanf("%s",&a);
	
	printf("The Size Of String Is %d",string(a));
	return 0;
}
