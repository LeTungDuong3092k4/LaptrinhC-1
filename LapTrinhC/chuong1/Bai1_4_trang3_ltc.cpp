#include "stdio.h"
#include "math.h"

int main()
{
	float a,abinhphuong,alapphuong,canbachaicuaa;
	
	do {
		printf("Vui long nhap gia tri cua a de a xac dinh");
		printf("\nGia tri cua a la:",a);scanf("%f",&a);
	}
	while (a<0);
	 abinhphuong=a*a;
	 printf("binh phuong cua %.2f la %.2f",a,abinhphuong);
	 
	 alapphuong=pow(a,3);
	 printf("\nlap phuong cua %.2f la %.2f",a,alapphuong);
	 
	 canbachaicuaa=sqrt(a);
	 printf("\nCan bac hai cua %.2f la %.2f",a,canbachaicuaa);
}
