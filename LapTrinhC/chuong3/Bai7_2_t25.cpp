#include "stdio.h"
#define MAX 100
void Nhapmang(float,int);
void Nhapmang(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("a[%d]: ", i);
		scanf("%f", &a[i]);
	}
}

void Xuatmang(float,int);
void Xuatmang(float a[], int n)
{
	printf("\nCac so co trong mang la: ");
	for (int i = 0; i < n; i++)
	{
		printf("%g  ", a[i]);
	}
}

float tinhtong(float,int);
float tinhtong(float a[], int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= -10 && a[i] <= 20)
		{
			sum += a[i];
		}
	}
	return sum;
}

float tinh_tbc(float,int);
float tinh_tbc(float a[], int n)
{
	float dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= -10 && a[i] <= 20)
		{
			dem++;
		}
	}
	if (dem == 0)
	{
		return 0;
	}
	float tbc = tinhtong(a, n) / dem;
	return dem;
}
float max(float,int);
float max(float a[], int n)
{
	float max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}

void them_phan_tu(float a[], int n)
{
	int m;
	float k;
	printf("\n\nNhap vao vi tri can them: ");
	scanf("%d", &m);
	printf("Nhap vao gia tri can them: ");
	scanf("%f", &k);

	if (m < 0 || m> n)
	{
		printf("Vi tri %d khong hop le", m);
		return;
	}

	for (int i = k; i >= m; i--)
	{
		a[i + 1] = a[i];
	}
	a[m] = k;
	n++;
	printf("\nSau khi them phan tu: ");
	Xuatmang(a, n);
}
int main()
{
	float a[MAX];
	int n;
	
	do
	{	
		printf("Nhap vao so phan tu mang: ");
		scanf("%d", &n);
	}while(n<=0);
	
	Nhapmang(a, n);
	Xuatmang(a, n);

	if (tinhtong(a, n) == 0)
		printf("\n Khong co so nao trong khoang [-10,20]");
	else
		printf("\n Tong trong khoang [-10,20] la: %g", tinhtong(a, n));

	if (tinh_tbc(a, n) == 0)
		printf("\n Khong co so nao trong khoang [-10,20]");
	else
		printf("\n Trung binh cong trong khoang [-10,40] la: %g", tinh_tbc(a, n));

	printf("\n So lon nhat trong mang la: %g", max(a, n));

	them_phan_tu(a, n);

	return 0;
}
