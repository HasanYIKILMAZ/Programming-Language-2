#include<stdio.h>
#include<stdlib.h>

int sum(int n)
{	
	if(n!=1)
	{
		return (n+sum(n-1));
	}
	else 
	{
		return 1;
	}
}
int main()
{
	int n;
	
	printf("Please enter a natural number:\n");
	scanf("%d",&n);
	
	
	printf("Sum of numbers: %d",sum(n));
	
	
}
