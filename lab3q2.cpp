#include<stdio.h>
#include<stdlib.h>

int le(int A[],int n)
{	int x;
	if(n==1)
	{
		return A[0];		
	}
	else
	{
		x=le(A,n-1);
	}
	if(x>A[n-1])
	{
		return x;
	}
	else
	{
		return A[n-1];
	}
}
int main()
{
	int n;
	int A[n];
	
	printf("Please enter total elements of array A:\n");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("Please enter %d. element of array:\n ",i+1);
		scanf("%d",&A[i]);
	}	
	
	printf("Maximum element of array: %d",le(A,n));
}
