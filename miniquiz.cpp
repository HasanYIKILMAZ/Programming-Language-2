#include<stdio.h>
#include<stdlib.h>

int f(int x)
{
	if(x <= 0)
	{
		return 0 ;
	}
	else 
	{
		return 2+f(x-1);
	}
	
}

int main()
{
	int x;
	printf("Lutfen 2 katinin hesaplanmasini istediginiz sayiyi giriniz : \n");
	scanf("%d",&x);
	
	printf("Sonuc : %d ",f(x));
	
	return 0;
}
