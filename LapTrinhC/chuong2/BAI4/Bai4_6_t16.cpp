#include "stdio.h"

double giaithua(int);
double giaithua(int n)
{
	double sum,nghichdao=1;
	for(int i=1;i<=n;i++)
	{
		nghichdao=nghichdao*i;
		sum+=1/nghichdao;
	}	
}
int main()
{
	int n;printf("Nhap n=");scanf("%d",&n);
	printf("Tong nghich dao cua %d la: %f", n, giaithua(n));
	return 0;
}
