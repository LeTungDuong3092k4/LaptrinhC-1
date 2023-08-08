#include "stdio.h"
#include "math.h"

int main()
{
	float a,b;
	char pheptinh;
	printf("Nhap gia tri a:");scanf("%f",&a);
	printf("Nhap gia tri b:");scanf("%f",&b);
	
	do	{
		fflush(stdin);
		printf("Nhap phep tinh toan tu:");
		scanf("%c",&pheptinh);	
	}while(pheptinh !='+' && pheptinh !='-' && pheptinh !='*' && pheptinh !='/');
	switch(pheptinh)
	{
		case '+':
			{
				printf("tong cua %f va %f la:%.2f",a,b,a+b);break;
			}
		case '-':
			{
				printf("hieu cua %f va %f la:%.2f",a,b,a-b);break;
			}
		case '*':
			{
				printf("tich cua %f va %f la:%.2f",a,b,a*b);break;
			}
		case '/':
			{
				printf("thuong cua %f va %f la:%.2f",a,b,a/b);break;
			}
	}
	
	
}
