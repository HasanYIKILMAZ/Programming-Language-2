#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(NULL));
	int total,z1,z2;
	
	z1= rand()%6+1;
	z2= rand()%6+1;
	
	total=z1+z2;
	printf("Zarlar atiliyor\n");
	printf("%d + %d = %d \n",z1,z2,total);

	
	
	if(total== 7 && 11)
		{
			printf("Kazandiniz!");
			
		}
	else if(total== 2 && 3 && 12)
		{
			printf("Kaybettiniz!");
			
		}
	else 
		{
			int point=total;
			printf("Puaniniz: %d \n",total);
			printf("Kazanmak icin tekrar %d atmaniz gerekiyor. \n",point);
			printf("%d atmadan once 7 atarsaniz kaybedersiniz.\n",point);
			while(total != 7 )
			{
				z1= rand()%6+1;
				z2= rand()%6+1;	
				total=z1+z2;
			
				printf("Zarlar tekrar atiliyor\n");
				printf("%d + %d = %d \n",z1,z2,total);
			
				if(point == total)
				{
					printf("Kazandiniz!");
					return 0;	
				}			
			 	
			}	
			printf("Kaybettiniz!");
		
		}
	
	return 0;
}
