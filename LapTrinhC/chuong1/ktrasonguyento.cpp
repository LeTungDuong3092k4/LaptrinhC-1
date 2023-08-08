//kiem tra so nguyen to
#include "stdio.h"
#include "math.h"

int main()
{
	int n;
	printf("Nhap vao 1 so nguyen n: ");
	scanf("%d",&n);
	int ktra=0;
	if(n<2)
	{
		printf("%d khong phai la so nguyen to",n);
	}
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			ktra=1;
		}
	}
	if(ktra==1)
	{
		printf("%d khong phai la so nguyen to",n);
	}else{
		printf("%d la so nguyen to",n);
	}
	return 0;
}
