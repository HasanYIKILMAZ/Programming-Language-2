#include<stdio.h>
#include<stdlib.h>

void fonk(void);
void fonk_sta(void);

int main()
{
	fonk();
	fonk_sta();
	
	printf("\n");
	
	fonk();
	fonk_sta();
	
	return 0;
}

void fonk(void)
{
	int id = 1;
	printf ("fonk() id de�i�ken de�eri: %d \n",id);
	
	id +=21;
	printf ("fonk() id de�i�ken de�eri: %d \n",id);
}

void fonk_sta(void)
{
	static int id=1;
	printf("fonk_sta() id de�i�ken de�eri %d\n",id);
	id+=21;
	printf ("fonk() id de�i�ken de�eri: %d \n",id);
}




