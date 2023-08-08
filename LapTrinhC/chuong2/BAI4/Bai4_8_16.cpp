#include "stdio.h"
void hinhchunhatdac(int,int);
void hinhchunhatdac(int m,int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	int n,m;
	printf("Nhap so hang n=");scanf("%d",&n);
	printf("nhap so cot m=");scanf("%d",&m);
	
	hinhchunhatdac(m,n);
	return 0;
}
