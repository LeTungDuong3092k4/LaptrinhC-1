#include<stdio.h>
#include<math.h>

#define MAX_ARR 100

void nhapmang(int a[], int n);
void xuatmang(int a[], int n);
int tim(int a[], int n, int x);

int main()
{
	int n,x,a[MAX_ARR];
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d",&n);

	nhapmang(a,n);

	printf("\n>> Mang vua nhap la: ");
	xuatmang(a,n);

	printf("\n\nNhap vao so x: ");
	scanf("%d",&x);
	printf("\n>> Phan tu trong mang gan %d nhat la: %d\n",x,tim(a,n,x));

	return 0;
}

void nhapmang (int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}
void xuatmang (int a[], int n)
{
	for(int i = 0; i < n; i++)
		printf("%d ", a[i]);
}
int tim (int a[], int n, int x)
{
	int i, vtgn = 0;
	int tg;
	int kc = abs(a[0] - x);
	for(i = 1; i < n; i++)
	{
		tg = abs(a[i] - x);
		if(kc > tg)
		{
			kc = tg;
			vtgn = i;
		}
	}
	return a[vtgn];
}
