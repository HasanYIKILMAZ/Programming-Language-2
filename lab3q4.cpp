#include<stdio.h>
#include<stdlib.h>

int lcd(int a,int b,int i)
{	int x;

	if(i>a && i>b)
	{
		return x;
	}
	else
	{
		return lcd(a,b,i+1);
	}
	
	if(a%i==0 || b%i==0)
	{
		x=lcd(a,b,i);
	}
	
}

int main()
{	
	int a,b;
	int i=1;
	printf("Please enter first positive number:\n");
	scanf("%d",&a);			
	printf("Please enter second positive number:\n");
	scanf("%d",&b);
	
	printf("Largest common divisor is %d",lcd(a,b,i));
	
	return 0;
	
}
