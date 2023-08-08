#include "stdio.h"
int main()
{
	int n,s;
	printf("Nhap so N:");scanf("%d",&n);
	for (int i=0;i<=n;i++)
	{
		s+=i;
	}
	printf("Tong %d so tu nhien dau tien la:%d",n,s);
}
