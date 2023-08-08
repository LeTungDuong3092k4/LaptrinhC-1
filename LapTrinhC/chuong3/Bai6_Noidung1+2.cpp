#include "stdio.h"
#include "math.h"
#define MAX 100
void Nhapmang(int,int);
void Nhapmang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
}

void Xuatmang(int ,int);
void Xuatmang(int a[],int n)
{
	printf("Noi dung cua Mang la:");
	for(int i=0;i<n;i++)
		printf("%d\t",a[i]);
}

int tongcacsochan(int ,int);
int tongcacsochan(int a[],int n)
{
	int s=0,i;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			s+=a[i];
		}
	}
	return s;
}

int tongcacsole(int ,int);
int tongcacsole(int a[],int n)
{
	int s=0,i;
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			s+=a[i];
		}
	}
	return s;
}

int max(int,int);
int max(int a[],int n)
{
	int max=a[0],i;
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	return max;
}

int min(int,int);
int min(int a[],int n)
{
	int min=a[0],i;
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	return min;
}

void sapxep(int,int);
void sapxep(int a[],int n)
{
	int tang,i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				tang=a[i];
				a[i]=a[j];
				a[j]=tang;
			}
		}
	}
	printf("Mang sau khi sap xep la:");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}

int main()
{
	int a[MAX],n;
	do
	{
		printf("Nhap so phan tu:");scanf("%d",&n);
	}while(n<=0);
	Nhapmang(a,n);
	Xuatmang(a,n);
	printf("\nTong cac so chan la:%d",tongcacsochan(a,n));
	printf("\nTong cac so le la:%d",tongcacsole(a,n));
	printf("\nGia tri max=%d",max(a,n));
	printf("\nGia tri min=%d",min(a,n));
	sapxep(a,n);

	
	return 0;
}
