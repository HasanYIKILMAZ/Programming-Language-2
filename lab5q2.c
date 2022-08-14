#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* isim soyisim için gerekli minimum char bellek alanýný malloc fonksiyonu 
kullanarak ayýrýnýz ve içerisine strcpy fonksiyonunu kullanarak adýnýzý ve soyadýnýzý arada boþluk býrakarak giriniz */





int main()

{
	char *is;
	
	is= (char *) malloc (14*sizeof(char *));
	
	strcpy(is,"Hasan YIKILMAZ");
	
	printf("%s",is);
	
	free(is);
	
	return 0;
	
}


