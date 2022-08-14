#include<stdio.h>
#include<stdlib.h>


/*Toplam eleman sayýsýný kullanýcýdan  alarak bu sayý kadar bellekten calloc fonksiyonunu kullanarak gerekli yeri alýnýz.
Ayýrdýðýnýz bu bellek alanýný eleman sayýsý kadar deðeri kullanýcýdan alýnýz daha sonra girilen en büyük deðeri tanýmladýðýnýz iþaretçi
deðiþkeni kullanarak bulunuz ve ekrana yazdýrýnýz.*/

int main()
{	
	int eleman_sayisi,i;
	int *p;
	printf("Toplam Eleman Sayisi: ");
	scanf("%d",&eleman_sayisi);
	
	int *A;
	A=(int*) calloc (eleman_sayisi,sizeof(int));
	for(i=0; i<eleman_sayisi ;i++)
	{
		
		printf("%d. eleman :",i+1);
		scanf("%d",&A[i]);
			
	}
		p=&A[0];
	for(i=0;i<eleman_sayisi;i++)
	{
		
		if(*p<A[i])
		*p=A[i];
	
	}
	printf("En Buyuk Deger: %d ",*p);
	
	free(A);
	
	return 0;
}


