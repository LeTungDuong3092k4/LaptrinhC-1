#include "stdio.h"
#include "math.h"

int ucln(int, int);
int ucln(int a,int b)
{
			while(a != b) 
			{
				if(a > b) 
				{
					a = a - b;
				} else 
				{
					b = b - a;
				}
			}
	return a;
}
int main()
{
	int a,b;
	do{
		printf("Nhap a=");scanf("%d",&a);
		printf("Nhap b=");scanf("%d",&b);
	}while(a<0 || b<0);
		if(a == 0 && b == 0) 
		{
			printf("Khong ton tai UCLN\n");
		} else if(a == 0 || b == 0) 
		{
			printf("Khong co UCLN = %d", (a == 0) ? b : a);
		}else
		{
			printf("\nUoc chung lon nhat la:%d",ucln(a,b));
		}
	return 0;
	
}
