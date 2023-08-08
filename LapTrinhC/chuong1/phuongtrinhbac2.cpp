#include "stdio.h"
#include "math.h"

int main()
{
	float a,b,c,delta,x1,x2;
	
	printf("a=");scanf("%f",&a);
	printf("b=");scanf("%f",&b);
	printf("c=");scanf("%f",&c);
	delta=b*b-4*a*c;
	if (delta<0)
	{
		printf("phuong trinh vo nghiem");
	}else{
		 if (delta==0)
		 {
			printf("phuong trinh co nghiem kep");
			printf("\nnghiem kep x=%.2f",-b/(2*a));
		 }else{
		 	printf("phuong trinh co 2 nghiem phan biet");
		 	x1=(-b-sqrt(delta))/(2*a);
		 	x2=(-b+sqrt(delta))/(2*a);
		 	printf("x1=%.2f\nx2=%.2f",x1,x2);
		 }
	}
}
