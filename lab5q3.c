#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*�ncelikle sadece ad�n�z i�in gerekli olan minimum bellek alan�n� malloc ile ay�r�n�z.Daha sonra 
soyad�n�z� da eklemek i�in bu bellek alan�n� realloc ile geni�letiniz*/

int main()
{
	char *isim;
	
	isim= (char *) malloc (5*sizeof(char *));
	
	strcpy(isim,"Hasan");
	
	isim= (char *) realloc (isim,14*sizeof(char));
	
	strcpy(isim,"Hasan YIKILMAZ");
	
	printf("%s",isim);
	
	free(isim);
		
	return 0;
}



