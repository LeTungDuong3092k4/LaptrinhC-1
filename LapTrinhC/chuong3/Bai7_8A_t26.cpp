#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void khoi_tao_mang(int a[], int kichCo, int toiDa);
void xuat_mang (int a[], int n);

int main()
{

	int n;
	printf("Nhap vao so gia tri mang: ");
	scanf("%d", &n);

	int a[n];

	khoi_tao_mang(a, n, 100);
	xuat_mang(a,n);

	return 0;
}

void xuat_mang (int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\n>> a[%d]: %d\n", i, a[i]);
	}
}

void khoi_tao_mang(int a[], int kichCo, int toiDa)
{
	printf("\nMang ngau nhien la: \n");
	srand(time(NULL));

	for (int i = 0; i < kichCo; i++)
	{
		a[i] = rand() % toiDa;
	}
}
