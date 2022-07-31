#include<stdio.h>
#include<stdlib.h>

int bodyindex(float weight,float height )
{
	float bmi= weight/ height * height;
	
	if(bmi<=18.00)
	{
		return 1;
	}
	else if(19.00>=bmi<=25.00)
	{
		return 2;
	}
	else if(26.00>=bmi<=30.00)
	{
		return 3;
	}
	else
		return 4;
	
}
int main()
{
	int n;
	int weight;
	float height;
	printf("Please enter your weight:");
	scanf("%d",&weight);
	printf("\n Please enter your height:");
	scanf("%d",&height);
	
	
	height=float (height/100);
	
	printf("%d %d",weight,height);
	n=bodyindex(weight,height);
	if(n == 1)
	{
		printf("\n Zayýf");
	}
	else if(n == 2)
	{
		printf("\n Normal");
	}
	else if(n == 3)
	{
		printf("\n Kilolu");
	}
	else if(n == 4)
	{
		printf("\n Obez");
	}
	
	return 0;
	
}

