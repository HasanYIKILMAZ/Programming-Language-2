#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* isim soyisim i�in gerekli minimum char bellek alan�n� malloc fonksiyonu 
kullanarak ay�r�n�z ve i�erisine strcpy fonksiyonunu kullanarak ad�n�z� ve soyad�n�z� arada bo�luk b�rakarak giriniz */





int main()

{
	char *is;
	
	is= (char *) malloc (14*sizeof(char *));
	
	strcpy(is,"Hasan YIKILMAZ");
	
	printf("%s",is);
	
	free(is);
	
	return 0;
	
}


