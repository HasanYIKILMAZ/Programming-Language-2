#include<stdio.h>
#include<stdlib.h>

int power(int x,int y)
{	
	if(y!=0)
	{
		return x*power(x,y-1);
	}
	else
	{
		return 1;
	}
}

int main()
{	
	int x,y;
	printf("Hesaplanmasini istediðiniz uslu sayinin taban sayisini giriniz: \n");
	scanf("%d",&x);
	printf("Hesaplanmasini istediðiniz uslu sayinin pozitif kuvvetini giriniz: \n");
	scanf("%d",&y);
	
	printf("%d ustu %d = %d",x,y,power(x,y));
	
	return 0;
}
