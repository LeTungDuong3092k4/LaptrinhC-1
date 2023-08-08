//Viet chuong trinh nhap vao ban kinh hình cau va tinh dien tich hinh cau va the tich
#include "stdio.h"
#include "math.h"
#define pi 3.14
int main()
{
	float r,s,v;
	do {
		printf("Vui long nhap gia tri duong cho ban kinh");
		printf("\nBan kinh cua hinh cau la: ",r);
		scanf("%f",&r);
		
	}
	while (r<0);
	s=4*pi*pow(r,2);
		printf("Gia tri cua dien tich la: %.2f",s);
		
		v=(4/3)*pi*pow(r,3);
		printf("\nGia tri cua the tich la: %.2f",v);
		
}
