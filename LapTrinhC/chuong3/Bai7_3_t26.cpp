#include "stdio.h"
#include "math.h"
#define MAX 100
void Nhapmang(int,int);
void Nhapmang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=",i+1);
		scanf("%d",&a[i]);
	}
}

void swap(int &a,int &b)
{
	int tam=a;
	a=b;
	b=tam;
}

void sapxeptang(int,int);
void sapxeptang(int x[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int vitrinhonhat=i;
		for(int j=i+1;j<n;j++)
		{
			if(x[j]<x[vitrinhonhat])
			{
				vitrinhonhat=j;
			}	
		}
		swap(x[i],x[vitrinhonhat]);
	}
}

void sapxepgiam(int,int);
void sapxepgiam(int x[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int vitrilonnhat=i;
		for(int j=i+1;j<n;j++)
		{
			if(x[j]>x[vitrilonnhat])
			{
				vitrilonnhat=j;
			}
		}
		swap(x[i],x[vitrilonnhat]);
	}
}

void Xuatmang(int ,int);
void Xuatmang(int x[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t",x[i]);
	}
}

int main()
{
	int a[MAX],n;
	do{
		printf("Nhap vao so luong phan tu 0<n<=100:");
		scanf("%d",&n);
	}while(n<1||n>100);
	Nhapmang(a,n);
	printf("\nMang tang dan:");
	sapxeptang(a,n);
	Xuatmang(a,n);
	
	printf("\nMang giam dan:");
	sapxepgiam(a,n);
	Xuatmang(a,n);
	
	return 0;
}
