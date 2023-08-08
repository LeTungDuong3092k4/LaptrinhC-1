#include "stdio.h"
#include "math.h"

void giaiptbac2(float ,float, float);
void giaiptbac2(float a,float b,float c)
{
	float delta,x1,x2;
	delta=pow(b,2)-4*a*c;
	if(delta<0)
	{
		printf("Phuong trinh vo nghiem");
	}else if(delta ==0)
	{
		printf("Phuong trinh co nghiem kep x1=x1=%.2f",-b/(2*a));
	}else
	{
		printf("phuong trinh co 2 nghiem phan biet");
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf("x1=%.2f\nx2=%.2f",x1,x2);
	}
}
int main()
{
	float a,b,c;
	printf("Nhap a=");scanf("%f",&a);
	printf("Nhap b=");scanf("%f",&b);
	printf("Nhap c=");scanf("%f",&c);
	giaiptbac2(a,b,c);
	return 0;	
}
