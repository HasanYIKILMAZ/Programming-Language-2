#include<stdio.h>
#include<stdlib.h>

void fonk(void);

int gid= 297;

int main(void)
{
	printf("deneme.c gid de�i�ken de�eri ; %d \n",gid);
	
	fonk();
	
	return 0;
}

extern int gid;

void fonk(void)
{
	printf("deneme.c gid de�i�ken de�eri ; %d \n",gid);	
}
