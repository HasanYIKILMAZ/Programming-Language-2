#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Verilen c�mle i�erisinde verilen kelimeyi arayan ve e�er kelime c�mlede
varsa bulundu�u yerlerin ba�lang�� indisini ekrana yazd�ran program� yaz�n�z*/


int main()
{
	char a[100],b[10];

	printf("Lutfen cumleyi giriniz: ");
	gets(a);
	
	printf("\nLutfen kelimeyi giriniz:");
	scanf("%s",b);
	int s=0,sayac=0,c,i;
	c=strlen(a);
	
	for(i=0;i<strlen(a);i++)
	{
		
	}
	for(i=0;c>i;i++)
	{
		
		if(a[i]==b[s])
		{
			
		  	sayac++;	
					
		}
		else if(a[i]==' ')
		{
		  	s=0;
		}
		else
		{
	
			sayac++;
			
		}
	
			
	}

	printf("Baslang�c indisi %d'dir",sayac);

	return 0;	
}
