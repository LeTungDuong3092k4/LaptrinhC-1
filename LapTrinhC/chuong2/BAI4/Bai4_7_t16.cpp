#include <stdio.h>

int ucln(int,int);
int ucln(int a,int b)
{
	if(a==0||b==0)
	{
		printf("UCLN=%d",a);
	}else
	{
		while(a!=b)
		{
			if(a>b)
			{
				a=a-b;
			}else{
				b=b-a;
			}
		}
	}
	return a;
}

int bcnn(int,int);
int bcnn(int a,int b)
{
	return ((a*b)/ucln(a,b));
}
int main()
{
	int a, b;
	printf("Nhap vao a: ");
	scanf("%d", &a);
	printf("Nhap vao b: ");
	scanf("%d", &b);
	ucln(a,b);
	printf("Uoc so chung lon nhat cua %d va %d la: %d\n", a, b,ucln(a,b));
	bcnn(a,b);
	printf("Boi so chung nho nhat cua %d va %d la: %d", a, b,bcnn(a,b));
	return 0;
}
