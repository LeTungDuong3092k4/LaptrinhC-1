#include <stdio.h>

#define MAX 100

void Nhapmang(int a[], int t);
void Xuatmang(int a[], int t);
void xoamang(int a[], int t, int m, int n);


void Nhapmang(int a[], int t)
{
	for (int i = 0; i < t; i++)
	{
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void Xuatmang(int a[], int t)
{
	for (int i = 0; i < t; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void xoamang(int a[], int t, int m, int n)
{
	printf("\nNhap phan tu thu 1 can xoa: ");
	scanf("%d", &m);
	printf("Nhap phan tu thu 2 can xoa: ");
	scanf("%d", &n);

	int i, j;
	for (i = m; i < t-1; i++)
	{
		a[i] = a[i+1];
	}
	for (j = n; j < t-1; j++)
	{
		a[j] = a[j+1];
	}
	t-=2;
	printf("\n>> Mang moi sau khi xoa la: ");
	Xuatmang(a,t);
}

int main()
{
	int a[MAX];
	int t, m, n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &t);

	Nhapmang(a, t);
	printf("\n>> Cac phan tu co trong mang la: ");
	Xuatmang(a,t);

	xoamang(a, t, m, n);

	return 0;
}

