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
int timkiem(int a[100],int n,int tk)
{
	int kq;
	for(int i=0;i<n;i++)
	{
		if(a[i]==tk)
		{
			kq==1;
			return 1;	
		}
	}
	return kq;
}

void thuchientimkiem(int a[100],int n)
{
	int tk;
	printf("\nNhap vao gia tri can tim:");
	scanf("%d",&tk);
	int kq=timkiem(a,n,tk);
	if(kq==1)
	{
		printf("tim thay!");
	}else
	{
		printf("\n Khong tim thay!");
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
	thuchientimkiem(a,n);
	
	return 0;
}
