#include<stdio.h>
#include<stdlib.h>

int tek(int	*p,int n)
{
	if(n<0)
	{
		return 0;
	}
	else
	{
		if(p[n]%2==1)
		{
			return 1+tek(p,n-1);
		}
		else
		return 0+tek(p,n-1); 
			
	}	
}

int main()
{	
	int i;
	int n;
	int A[n];
	int *p;
	
	
	printf("Lutfen dizinin eleman sayisini giriniz: \n");
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Lutfen dizinin %d. elemanini giriniz: \n",i+1);
		scanf("%d",&A[i]);	
	}
	p=&A[0];
	
	printf("Dizideki tek eleman sayisi : %d",tek(A,n));	
	
}
