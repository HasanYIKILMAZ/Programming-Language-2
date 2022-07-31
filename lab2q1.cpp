#include<stdio.h>
#include<stdlib.h>

int calculate(int p_grade,int A[],int n)
{	
	
	int avr=0;
	for(int i=1;i<=n;i++)
	{
		printf("Please enter %d. student's grade:\n",i);
		scanf("%d",&A[i-1]);
	}	
		int fail=0;
	for(int i=0;i<=n;i++)
	{
		avr+= A[i];
		if(A[i] < p_grade)
		{
			fail++;
		}
			
	}
	
	printf("Average is %.2f \n",(float)avr/n);
	printf("%d students failed",fail);
	
}


int main()
{	
	
	int p_grade;
	int n;
	int A[n];
	
	printf("Please enter number of students:\n");
	scanf("%d",&n);
	
	printf("Please enter passing grade:\n");
	scanf("%d",&p_grade);
	
	calculate(p_grade,A,n);
	
	return 0;
}

