#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*Öncelikle sadece adýnýz için gerekli olan minimum bellek alanýný malloc ile ayýrýnýz.Daha sonra 
soyadýnýzý da eklemek için bu bellek alanýný realloc ile geniþletiniz*/

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



