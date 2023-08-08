//To hop chap k cua n

#include "stdio.h"

int giaithua(int);
int giaithua(int n)
{
	if(n==0)
	{
		return 1;
	}else
	{
		return (n*(giaithua(n-1)));
	}
}

int tohop(int ,int);
int tohop(int k,int n)
{
 	return giaithua(n)/(giaithua(k)*giaithua(n-k));
}

int main()
{
	int k, n;
    do
	{
		printf("Nhap vao k: ");
  	  scanf("%d", &k);
  	  printf("Nhap vao n: ");
  	  scanf("%d", &n);
	}while(k<0||n<0||n>k);
	giaithua(n);
	printf("Giai thua cua %d la %d\n",n,giaithua(n));
	tohop(k,n);
	printf("To hop chap %d cua %d la %d",k,n,tohop(k,n));
	return 0;
}
