#include<stdio.h>
#include<stdlib.h>

float Pi=3.14;

float square (const int r)
{
	float result= Pi * r * r;
	
	printf("Dairenin alaný: %.2f",result); 
	
	return 0;
}

int main()
{
	int r;
	int Pi;
	printf("Lutfen dairenin yaricapini giriniz \n");
	scanf("%d",&r);
	square(r);
}

