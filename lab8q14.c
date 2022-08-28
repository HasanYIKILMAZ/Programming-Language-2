#include<stdio.h>
struct complex{
	float real;
	float img;
};

typedef struct complex complex;

void  addNum(complex c1,complex c2,complex *result)
{
	result->real = c1.real+c2.real;
	result->img= c1.img+c2.img;
}
int main()
{
	complex c1,c2,result;
	
	printf("For first number \n");
	printf("Enter real part: \n");
	scanf("%f",&c1.real);
	printf("Enter imaginary part: \n");
	scanf("%f",&c1.img);
	
	printf("For second number \n");
	printf("Enter real part: \n");
	scanf("%f",&c2.real);
	printf("Enter imaginary part: \n");
	scanf("%f",&c2.img);
	
	addNum(c1,c2,&result);
	
	printf("/nResult.real = %.1f\n",result.real);
	printf("Result.img= %1.f",result.img);
	
}
