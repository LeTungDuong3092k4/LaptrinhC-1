#include "stdio.h"

void Nhapmang(int a[],int &n)
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

void xoaphantu(int a[100],int &n,int vitri)
{
	for(int i=vitri;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
}

void xoamangtheogiatri(int a[100],int &n)
{
	int giatri;
	printf("Nhap vao gia tri can xoa:");
	scanf("%d",&giatri);
	for(int i=0;i<n;i++)
	{
		if(a[i]==giatri)
		{
			xoaphantu(a,n,i);
		}
	}
}

int main()
{
	int a[100],n;
	do
	{
		printf("Nhap so luong phan tu cua mang:");
		scanf("%d",&n);	
	}while(n<1||n>100);
	
	Nhapmang(a,n);
	Xuatmang(a,n);
	printf("\n");
	xoamangtheogiatri(a,n);
	Xuatmang(a,n);
	return 0;
}
