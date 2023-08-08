#include "stdio.h"
#include "math.h"

int ktscp(int);
int ktscp(int n)
{
	int s=sqrt(n);
	return (s*s==n);
}

int main()
{
	int n;printf("Nhap n=");scanf("%d",&n);
	if(ktscp(n)==1)
	{
		printf("%d la so chinh phuong",n);
	}
	else
	{
		printf("%d khong phai la so chinh phuong",n);
	}
	return 0;	
}
