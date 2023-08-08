#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void khoiTaoMang(int a[], int kichThuoc)
{
	srand(time(NULL));
	for (int i = 0; i < kichThuoc; i++)
	{
		a[i] = rand() % 101 - 50;
	}
}

void inMang(int a[], int kichThuoc)
{
	for (int i = 0; i < kichThuoc; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void timMinMax(int a[], int kichThuoc, int *min, int *max)
{
	*min = a[0];
	*max = a[0];
	for (int i = 1; i < kichThuoc; i++)
	{
		if (a[i] < *min)
		{
			*min = a[i];
		}
		if (a[i] > *max)
		{
			*max = a[i];
		}
	}
}

void tinhTongSoAmVaTrungBinhCongSoDuong(int a[], int kichThuoc, int *tongAm, float *trungBinhCongDuong)
{
	*tongAm = 0;
	int tongDuong = 0;
	int soDuong = 0;
	for (int i = 0; i < kichThuoc; i++)
	{
		if (a[i] < 0)
		{
			*tongAm += a[i];
		}
		else
		{
			tongDuong += a[i];
			soDuong++;
		}
	}
	if (soDuong > 0)
	{
		*trungBinhCongDuong = (float)tongDuong / soDuong;
	}
	else
	{
		*trungBinhCongDuong = 0;
	}
}

int timSoNguyenTrongMang(int a[], int kichThuoc, int x)
{
	for (int i = 0; i < kichThuoc; i++)
	{
		if (a[i] == x)
		{
			return 1;
		}
	}
	return 0;
}

int kiem_tra_tang(int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		if (a[i - 1] > a[i])
		{
			return 0;
		}
	}
	return 1;
}

void sapXepMangTangDan(int a[], int kichThuoc)
{
	for (int i = 0; i < kichThuoc - 1; i++)
	{
		for (int j = i + 1; j < kichThuoc; j++)
		{
			if (a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main()
{
	int kichThuoc = 10;
	int a[kichThuoc];
	int min, max, tongAm;
	float trungBinhCongDuong;
	int x;

	khoiTaoMang(a, kichThuoc);
	printf("\n>> Mang duoc tao ngau nhien: ");
	inMang(a, kichThuoc);

	timMinMax(a, kichThuoc, &min, &max);
	printf("\n>> Gia tri nho nhat: %d\n", min);
	printf("\n>> Gia tri lon nhat: %d\n", max);

	tinhTongSoAmVaTrungBinhCongSoDuong(a, kichThuoc, &tongAm, &trungBinhCongDuong);
	printf("\n>> Tong cac so am: %d\n", tongAm);
	printf("\n>> Trung binh cong cac so duong: %.2f\n", trungBinhCongDuong);

	printf("\nNhap vao mot so nguyen: ");
	scanf("%d", &x);
	if (timSoNguyenTrongMang(a, kichThuoc, x))
	{
		printf("\n>> So nguyen %d co trong mang.\n", x);
	}
	else
	{
		printf("\n>> So nguyen %d khong co trong mang.\n", x);
	}

	int daSapXep = 1;
	for (int i = 0; i < kichThuoc - 1; i++)
	{
		if (a[i] > a[i + 1])
		{
			daSapXep = 0;
			break;
		}
	}

	if (kiem_tra_tang(a, kichThuoc))
	{
		printf("\n>> Day tren la day so tang\n");
	}
	else
	{
		printf("\n>> Day tren chua duoc sap xep tang\n");
	}

	if (!daSapXep)
	{
		sapXepMangTangDan(a, kichThuoc);
		printf("\n>> Mang sau khi sap xep tang dan: ");
		inMang(a, kichThuoc);
	}

	return 0;
}
