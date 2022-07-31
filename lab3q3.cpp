#include<stdio.h>
#include<stdlib.h>

int sum(int n)
{
	if(n!=0)
	{
		return n%10+sum(n/10);
	}
	else 
	return 0;
	
}

int main()
{
	int n,result;
	printf("Please enter a number:\n");
	scanf("%d",&n);
	
	printf("Result: %d",sum(n));
}
