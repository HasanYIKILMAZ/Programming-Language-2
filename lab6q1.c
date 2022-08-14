#include<stdio.h>
#include<stdlib.h>
/*Klavyeden girilen iki kelimenin ayný olup olmadýðýný ayný deðillerse hangisinin
kelime olarak daha uzun olduðunu belirten program yazýnýz */


int main()
{
	char string1[30], string2[30];
	printf("Lutfen ilk kelimeyi giriniz :");
	scanf("%s",string1);
	
	printf("Lutfen ikinci kelimeyi giriniz :");
	scanf("%s",string2);
	
	if (strcmp(string1,string2) == 0 )
	{
		printf("Kelimeler birbirine esittir.");
	}
	else
	{
		printf("Kelimeler birbirine esit degildir. \n");
		 
	 	int a = strlen(string1);
	 	int b = strlen(string2);
	
	 	if(a>b)
	 		printf("Ilk kelime ikinci kelimeden daha uzundur.");
	 	
		else if (b>a)
	 		printf("Ikinci kelime ilk kelimeden daha uzundur.");
	 	
	 	else
	 		printf("Iki kelime birbirine esit uzunluktadir.");
		 	
	}
	
	return 0;
	
}
