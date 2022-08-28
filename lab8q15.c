#include<stdio.h>
struct student
{
	int number;
	char name[20];
	char surname[20];
	int midGrade;
};

struct student a[5];

int main()
{
	int i;
	for(i = 0;i<5;i++)
	{
		printf("Lutfen ogrencinin numarasini giriniz.\n");
		scanf("%d",&a[i].number);
		printf("Lutfen ogrencinin adini giriniz.\n");
		scanf("%s",a[i].name);
		printf("Lutfen ogrencinin soyadini giriniz.\n");
		scanf("%s",a[i].surname);
		printf("Lutfen ogrencinin notunu giriniz.\n");
		scanf("%d",&a[i].midGrade);
	}
	
	for(i =0;i<5;i++)
	{
		printf("Number: %d Name: %s Surname: %s MidGrade: %d\n",a[i].number,a[i].name,a[i].surname,a[i].midGrade);	
	}
	
	
	return 0;
}
