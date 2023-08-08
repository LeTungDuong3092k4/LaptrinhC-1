//Dao nguoc mang 1 chieu

#include "stdio.h"

void Nhapmang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=",i+1);
		scanf("%d",&a[i]);
	}
}

void Xuatmang(int a[],int n)
{
	printf("Noi dung cua mang la:");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

void Xuatmangnguoc(int a[100],int n)
{
	printf("\nNoi dung cua mang nguoc:");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
}

void Daonguocmang(int a[100],int n)
{
	for(int i=0;i<=n/2;i++)
	{
		int temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
}
int main()
{
	int a[100];
	int n;
	do{
		printf("Nhap so luong phan tu cua mang:");
		scanf("%d",&n);
	}while(n<0||n>100);
	Nhapmang(a,n);
	Xuatmang(a,n);
	Xuatmangnguoc(a,n);
	Daonguocmang(a,n);
	Xuatmang(a,n);
	return 0;
}
