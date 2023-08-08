#include "stdio.h"
int giaithua(int);
int giaithua(int n)
{
	int s=1;
	if(n==0)
	{
		s=1;	
	}	
	for(int i=1;i<=n;i++)
	{
		s*=i;
	}
	return s;
} 
int main()
{
	int n;printf("Nhap n=");scanf("%d",&n);
	giaithua(n);
	printf("%d giai thua la:%d",n,giaithua(n));
	return 0;
}
