#include "stdio.h"

int tong(int);
int tong(int n)
{
	int s,i=0;
	while(i<=n)
	{
		s+=i;
		i++;
	}
	return s;	
}
int main()
{
	int n;
	do{
		printf("Nhap n=");scanf("%d",&n);
	}while(n<0);
	printf("Tong %d so nguyen duong dau tien la:%d",n,tong(n));
	return 0;
}
