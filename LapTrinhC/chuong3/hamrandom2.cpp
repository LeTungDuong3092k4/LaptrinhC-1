#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int random(int minN, int maxN)
{
	return minN + rand() % (maxN + 1 - minN);
}

void khoitaomang(int a[],int n)
{
	srand(time(NULL));
	for(int i=0;i<n;i++)
	{
		a[i]=random(1,100);
	}
}

void Xuatmang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf(">>a[%d]=%d\n",i,a[i]);
	}
}

void max(int a[],int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
}

void min(int a[],int n)
{
	int min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
}

void tinhtongsoamvatbcduong(int a[],int n,int *tongam, float *tbcsoduong)
{
	tongam=0;
	int tongduong=0,soduong=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			tongam+=a[i];
		}
		else
		{
			tongduong+=a[i];
			soduong++;
		}
	}
	if(soduong>0)
	{
		*tbcsoduong=(float)tongduong/soduong;
	}	
	else
	{
		*tbcsoduong=0;
	}
}

int timsonguyentrongmang(int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			return 1;
		}
	}
	return 0;
}

int ktratang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i-1]>a[i])
		return 0;
	}
	return 1;
}

void sapxeptangdan(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

void themphantu(int a[], int n)
{
	int m;
	int k;
	printf("\n\nNhap vao vi tri can them: ");
	scanf("%d", &m);
	printf("Nhap vao gia tri can them: ");
	scanf("%d", &k);

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
	int a[100];
	int n;
	do{
		printf("Nhap so luong phan tu:");
		scanf("%d",&n);
	}while(n<0);
	
	khoitaomang(a,n);
	Xuatmang(a,n);
	
	int x;
	printf("\nNhap vao mot so nguyen: ");
	scanf("%d", &x);
	if (timsonguyentrongmang(a, n, x))
	{
		printf("\n>> So nguyen %d co trong mang.\n", x);
	}
	else
	{
		printf("\n>> So nguyen %d khong co trong mang.\n", x);
	}
	
	
	if (ktratang(a, n))
	{
		printf("\n>> Day tren la day so tang\n");
	}
	else
	{
		printf("\n>> Day tren chua duoc sap xep tang\n");
		sapxeptangdan(a, n);
		printf("\n>> Mang sau khi sap xep tang dan:\n ");
		Xuatmang(a, n);
	}
	
	themphantu(a,n);
	
	
	return 0;
}
