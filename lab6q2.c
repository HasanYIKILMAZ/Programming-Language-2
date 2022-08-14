#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Verilen cümle içerisinde verilen kelimeyi arayan ve eðer kelime cümlede
varsa bulunduðu yerlerin baðlangýç indisini ekrana yazdýran programý yazýnýz*/


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

	printf("Baslangýc indisi %d'dir",sayac);

	return 0;	
}
