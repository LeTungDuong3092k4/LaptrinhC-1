#include "stdio.h"
#include "math.h"
int main()
{
	int n;
	do{
		printf("Nhap so nguyen n=");scanf("%d",&n);
	}while(n<0);
	int tong;
	for(int i=0;i<=n;i++)
	{
		tong=tong+i;
	}
	int tongbac3;
	tongbac3=pow(tong,3);
	printf("Tong bac 3 cua %d so nguyen dau tien la:%d",n,tongbac3);
}
