#include "stdio.h"
#include "math.h"
float timsolonnhat(float,float,float);
float timsolonnhat(float a,float b,float c)
{
	float max;
	max=a>b?a:b;
	return (max>c?max:c);
}
float timsonhonhat(float,float,float);
float timsonhonhat(float a,float b,float c)
{
	float min;
	min=a<b?a:b;
	return (min<c?min:c);
}

int main()
{
	float a,b,c;
	printf("Nhap a=");scanf("&f",&a);
	
	printf("Nhap b=");
	scanf("%f",&b);
	printf("Nhap c=");scanf("%f",&c);
	printf("\nSo lon nhat trong 3 so la:%f",timsolonnhat(a,b,c));
	printf("\nSo nho nhat trong 3 so la:%f",timsonhonhat(a,b,c));
	return 0;
}
