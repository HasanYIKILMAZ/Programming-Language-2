#include<stdio.h>
#include<stdlib.h>


/*Toplam eleman say�s�n� kullan�c�dan  alarak bu say� kadar bellekten calloc fonksiyonunu kullanarak gerekli yeri al�n�z.
Ay�rd���n�z bu bellek alan�n� eleman say�s� kadar de�eri kullan�c�dan al�n�z daha sonra girilen en b�y�k de�eri tan�mlad���n�z i�aret�i
de�i�keni kullanarak bulunuz ve ekrana yazd�r�n�z.*/

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


