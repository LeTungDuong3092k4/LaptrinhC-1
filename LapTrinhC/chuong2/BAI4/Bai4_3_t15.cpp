#include "stdio.h"
#include "math.h"

float canbachai(float);
float canbachai(float n)
{
	float tinh;
	tinh = sqrt(n);
	return tinh;
}
int main()
{
	float n;
	do{
		printf("Nhap n=");scanf("%f",&n);
	}while(n<0);
	canbachai(n);
	printf("Can bac hai cua %f la: %g", n, canbachai(n));
	return 0;
}
